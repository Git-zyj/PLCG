/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83598
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = arr_2 [i_0];
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) -994014891);
            var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
        {
            var_13 = 1622743445;
            arr_8 [i_0] [i_0] [i_2 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 2] [i_2 - 2])) ? (var_7) : (arr_1 [i_2 + 2] [i_2 + 1]))))));
            arr_9 [i_2] = (~((~(var_6))));
        }
        arr_10 [i_0] = ((((/* implicit */_Bool) (~((~(-1622743445)))))) ? (((((/* implicit */_Bool) (~(var_4)))) ? ((-(arr_2 [i_0]))) : (arr_1 [i_0] [16]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (arr_2 [i_0]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_14 = ((/* implicit */int) min(((-(arr_15 [i_4]))), (max((arr_2 [i_3]), (((/* implicit */unsigned long long int) (~(-1622743445))))))));
            var_15 = ((((/* implicit */_Bool) var_11)) ? (min(((~(arr_1 [i_3] [i_4]))), (((/* implicit */unsigned long long int) ((-1622743445) - (arr_0 [i_3] [i_4])))))) : (((/* implicit */unsigned long long int) 1622743445)));
        }
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_3]))))), (arr_2 [i_3])));
        var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11)))))))) - (((((/* implicit */_Bool) (~(var_0)))) ? ((~(var_1))) : (arr_15 [i_3]))));
        var_18 = max((((/* implicit */unsigned long long int) ((2303611366436988038ULL) != (((/* implicit */unsigned long long int) var_0))))), (arr_12 [i_3] [i_3]));
    }
    for (int i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        var_19 = arr_17 [i_5];
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                var_20 = -3248969;
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 4) 
                {
                    var_21 = (~(var_3));
                    var_22 = (+(min((arr_25 [9ULL] [i_7 + 1] [i_5] [i_6] [i_5 + 2]), (((/* implicit */unsigned long long int) arr_19 [i_5] [15])))));
                }
            }
            for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 1) 
            {
                var_23 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5090966938927087911ULL))))), (arr_16 [0ULL] [0ULL]));
                var_24 = ((((/* implicit */_Bool) -1622743465)) ? (((unsigned long long int) var_7)) : ((~(((9870181893801725263ULL) << (((-1548968978) + (1548969003))))))));
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                var_25 += ((/* implicit */unsigned long long int) -342303298);
                var_26 = (~((~(arr_28 [i_5 - 1] [i_6] [i_6 - 1]))));
                var_27 = ((/* implicit */int) arr_24 [i_5 - 1] [i_6] [i_5 - 1] [1ULL]);
            }
            for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((1622743445) < (-1)));
                var_29 = ((((/* implicit */_Bool) -1)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)));
                arr_35 [i_5 - 3] [i_5] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_6 [i_5] [i_6])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    var_30 = ((/* implicit */unsigned long long int) max((((int) ((((/* implicit */_Bool) 18006370600073701638ULL)) || (((/* implicit */_Bool) var_9))))), (max((arr_30 [i_5] [i_5] [i_5 - 3] [i_5 - 3]), (var_11)))));
                    arr_39 [i_5 + 2] [i_6] [i_5] [i_12] [i_5 + 2] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) arr_26 [i_5 + 3] [i_5])));
                }
            }
            var_31 = -1622743446;
        }
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
        {
            arr_44 [i_5] [i_13] [i_5] = ((/* implicit */unsigned long long int) (((~(16143132707272563566ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_5 + 2] [i_5] [i_5] [i_5]))))))));
            var_32 = ((/* implicit */int) max((var_32), (1622743437)));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) -1622743465))));
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            var_34 -= (~(var_4));
            var_35 = ((/* implicit */int) var_10);
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [14ULL] [i_14])) ? (arr_43 [i_5 - 3] [i_14]) : (2147483647)));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                for (int i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    {
                        var_37 = arr_0 [i_14] [i_15];
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((int) var_2)))));
                        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    }
                } 
            } 
        }
        var_40 = ((((((/* implicit */_Bool) (~(arr_48 [i_5] [i_5])))) ? (var_7) : (((unsigned long long int) 11278748175557425796ULL)))) / ((~(arr_21 [i_5]))));
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) -2147483641)))) < (min((var_4), (270582939648ULL))))))));
    }
    var_42 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (max((var_1), (((/* implicit */unsigned long long int) var_5)))) : (var_10))))));
    var_43 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_3)))) ? (var_8) : (max((((/* implicit */unsigned long long int) var_11)), (var_9))))) >= (var_6)));
}
