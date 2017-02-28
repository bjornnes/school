#!/usr/bin/env python2
# -*- coding: utf-8 -*-
#
#  Word2VecTestMain.py
#  
#  Copyright 2017 Stein-Erik <steine@stein-pc>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


def main(args):
    return 0

if __name__ == '__main__':
    import sys
    import word2vec
    
    #word2vec.word2phrase('../../GloVe/text8', 'text8-phrases', verbose=True)
    
    #word2vec.word2vec('text8-phrases', 'text8.bin', size=100, verbose=True)
    
    #word2vec.word2clusters('../../GloVe/text8', 'text8-clusters.txt', 100, verbose=True)
    
    model = word2vec.load('text8.bin')
    
    clusters = word2vec.load_clusters('text8-clusters.txt')
    
    sys.exit(main(sys.argv))
