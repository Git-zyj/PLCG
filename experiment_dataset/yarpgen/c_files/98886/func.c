/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98886
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (short)-32117))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32116)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)123))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) != (9340334308077570897ULL))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [7LL] [i_2] [i_2] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (unsigned short)59938)), (((((/* implicit */_Bool) 9340334308077570897ULL)) ? (var_6) : (4278136837464635852ULL)))))));
                        var_20 = ((/* implicit */short) (+(15878330545480179002ULL)));
                        arr_10 [i_0] [i_2] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)124)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_7) + (((/* implicit */unsigned long long int) 469762048)))) - (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / ((-(4059683554U)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)190)), (2568413528229372583ULL)))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_12))));
                        var_23 = 4882594947146794686ULL;
                    }
                } 
            } 
        }
    }
}
