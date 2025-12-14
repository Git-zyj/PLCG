/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87874
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)23847))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))))));
        var_11 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)22), ((short)-31)))), ((((-(var_5))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5294)) && (((/* implicit */_Bool) arr_2 [(short)12])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1136)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_1] [(short)11] [i_2]))))))) : ((-(((/* implicit */int) min((var_2), ((signed char)-52))))))));
            arr_10 [i_1] [i_1] [i_2] = 3458487555U;
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (unsigned short)20)), (2147483648U)))))) ? (((/* implicit */int) arr_6 [i_4])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))))));
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_3]))))), (((short) (short)-31))))), (0U)));
            }
            /* vectorizable */
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                arr_20 [i_1] [i_1] = ((((((/* implicit */int) var_7)) == (((/* implicit */int) (short)-1136)))) ? (((/* implicit */int) (short)-38)) : (((/* implicit */int) arr_2 [i_3])));
                arr_21 [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)7742)) ? (((/* implicit */int) (short)-11)) : (((/* implicit */int) (unsigned short)43669)))) : (((/* implicit */int) arr_12 [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        {
                            arr_27 [i_1] [i_3] [i_3] [i_5] [i_1] [i_1] [12U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_4)))));
                            arr_28 [4ULL] [i_1] [4ULL] [i_7] = ((/* implicit */short) (unsigned short)46641);
                            var_13 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_7 + 2]))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1]))));
                /* LoopSeq 2 */
                for (short i_8 = 1; i_8 < 11; i_8 += 3) 
                {
                    arr_31 [i_1] [i_1] [i_1] [i_3] [i_5] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)4))));
                    arr_32 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)4626)))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_12 [i_1]))));
                    arr_33 [i_8] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                    var_16 *= ((/* implicit */signed char) (((-(-1495035894))) > (var_1)));
                }
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (3)))) : (((((/* implicit */_Bool) var_9)) ? (2208755524298236832ULL) : (((/* implicit */unsigned long long int) arr_1 [i_3]))))));
                    var_18 &= ((/* implicit */int) arr_0 [i_5]);
                    arr_36 [i_1] [i_1] [i_5] [(unsigned short)7] = ((/* implicit */short) (unsigned short)2166);
                }
            }
            arr_37 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (short)-20746);
        }
        arr_38 [i_1] = ((/* implicit */short) max((((int) max((arr_23 [i_1] [i_1] [i_1] [i_1] [(signed char)5] [(short)7]), (((/* implicit */unsigned int) var_6))))), ((-((-(((/* implicit */int) (short)25))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-26))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (short)-35))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            var_20 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [(signed char)12] [(signed char)12])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_2 [i_1])))) : (((/* implicit */int) ((unsigned short) var_10))))), (((int) (short)13))));
            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_39 [i_1] [i_10] [(unsigned short)10])), ((((-(((/* implicit */int) var_2)))) + (((/* implicit */int) var_3))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (int i_12 = 1; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_46 [i_11] [i_10] [i_11] [i_12] [i_1]), (((/* implicit */int) (short)25))))) && (((/* implicit */_Bool) (unsigned short)2047))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max(((((-(var_9))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) arr_13 [i_1] [i_10] [i_11])) : (((/* implicit */int) var_8))))))), (((((/* implicit */int) ((unsigned short) 2108653475U))) < (((/* implicit */int) arr_0 [i_1])))))))));
                        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1161))))), (1417327921374125277ULL)))) ? (max((((((/* implicit */int) (short)41)) / (((/* implicit */int) (unsigned short)7813)))), ((-(((/* implicit */int) arr_6 [i_10])))))) : (((/* implicit */int) (unsigned short)2041))))));
                    }
                } 
            } 
            arr_47 [i_1] [i_10] = ((/* implicit */unsigned int) arr_13 [i_10] [i_10] [i_1]);
        }
    }
    var_25 &= ((/* implicit */int) ((unsigned long long int) var_7));
    var_26 = min((((/* implicit */unsigned long long int) 2147483647)), (13146916493966619934ULL));
}
