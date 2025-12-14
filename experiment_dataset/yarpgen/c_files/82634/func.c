/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82634
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((2537350392078604693LL) - (2537350392078604671LL))))))))) << (((((/* implicit */int) var_6)) + (23)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0 - 1] [(signed char)0] [i_2 - 1] [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_6)), (var_9))))))) & (((var_7) ? (var_0) : (((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_4]))))));
                                var_11 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (-(((((arr_10 [i_4] [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1]) >> (((((/* implicit */int) arr_5 [i_0] [i_2])) - (16492))))) * (((var_7) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))) : (((/* implicit */unsigned int) (-(((((arr_10 [i_4] [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1]) >> (((((((/* implicit */int) arr_5 [i_0] [i_2])) - (16492))) - (19902))))) * (((var_7) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_12 = ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_8)));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((((/* implicit */_Bool) min((10460639012969508430ULL), (10460639012969508430ULL)))) ? (7986105060740043175ULL) : (((((/* implicit */_Bool) -1626169911)) ? (((/* implicit */unsigned long long int) -1626169892)) : (10460639012969508430ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)0] [(signed char)0] [i_0] [i_0 + 2] [i_0]))) < (var_1)))), (min((var_3), (((/* implicit */unsigned short) var_6))))))))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5))) >> (((((/* implicit */int) var_6)) + (24)))))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (10460639012969508420ULL))))) : (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]))) : (min((((/* implicit */unsigned long long int) var_6)), (var_1)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 10460639012969508430ULL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_0 [i_5] [i_5])))) < (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_19 [i_5] [12] = ((/* implicit */unsigned char) ((10460639012969508410ULL) < (10460639012969508426ULL)));
        arr_20 [i_5] = ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_5]));
    }
    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    {
                        arr_36 [i_8] [i_8] [i_9] [i_9] [i_6] = ((/* implicit */unsigned int) var_7);
                        arr_37 [i_6] [i_6] [i_9] [i_9] [i_6] [i_6] = ((/* implicit */unsigned int) arr_35 [i_6] [i_6] [i_8] [(unsigned char)11]);
                        var_16 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (var_1) : (var_5))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_6] [i_6] [i_8])), (var_4)))) : (((1626169883) << (((((/* implicit */int) var_8)) - (64323))))))))));
                        arr_38 [i_9] [i_7] = ((/* implicit */short) ((unsigned int) var_9));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_10 = 3; i_10 < 19; i_10 += 2) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_25 [i_6 + 1] [i_10]))));
            arr_41 [i_10] [i_6] = ((/* implicit */unsigned long long int) 71433487737237468LL);
        }
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) & (((/* implicit */int) var_4)))) + (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_33 [(unsigned short)18] [i_6 + 1] [i_6] [i_6])) ? (min((var_5), (((/* implicit */unsigned long long int) 1626169878)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_35 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) /* same iter space */
    {
        arr_45 [2] [2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_11 - 1] [i_11 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_34 [i_11] [18ULL] [i_11] [i_11 + 2])))) : (((((/* implicit */_Bool) var_8)) ? (7986105060740043205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? ((~(((((/* implicit */int) var_7)) >> (((var_5) - (9507318774066695848ULL))))))) : (((/* implicit */int) var_6))));
        var_19 &= ((/* implicit */_Bool) arr_42 [i_11]);
        var_20 = ((/* implicit */short) (-(min((arr_23 [i_11 - 1] [i_11 + 1]), (((/* implicit */int) ((((/* implicit */int) arr_39 [i_11])) <= (((/* implicit */int) var_9)))))))));
        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_32 [i_11 + 1] [i_11] [i_11 + 1] [i_11]) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_3))))));
    }
}
