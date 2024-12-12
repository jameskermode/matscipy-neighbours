/* ======================================================================
 * matscipy-neigbours - Neighbour list for particle simulations
 * https://github.com/libAtoms/matscipy-neighbours
 *
 * Copyright (2014-2024) James Kermode, University of Warwick
 *                       Lars Pastewka, University of Freiburg
 *                       and others (see toplevel AUTHORS file)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __NEIGHBOURS_H_
#define __NEIGHBOURS_H_

#include <Python.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Neighbour list construction
 */
PyObject *py_neighbour_list(PyObject *self, PyObject *args);
PyObject *py_first_neighbours(PyObject *self, PyObject *args);
PyObject *py_triplet_list(PyObject *self, PyObject *args);
PyObject *py_get_jump_indicies(PyObject *self, PyObject *args);

/*
 * Construct seed array that points to start of rows
 */
void first_neighbours(int n, int nn, npy_int *i_n, npy_int *seed);

#ifdef __cplusplus
}
#endif

#endif
