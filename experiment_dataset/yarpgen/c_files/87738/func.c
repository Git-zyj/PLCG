/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87738
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
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(469762048U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)16])) ? (((/* implicit */int) (short)-26382)) : (arr_1 [i_0])))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [1ULL] [i_2]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)26382))) * (3825205257U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1867))))))));
                    arr_6 [(short)18] [(short)18] [i_1] [(short)18] = ((/* implicit */signed char) arr_4 [i_1 - 1] [i_1 - 1]);
                    var_20 = ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1 + 1])) ? (((/* implicit */int) (short)26395)) : (((/* implicit */int) arr_4 [i_2] [i_0])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_1 + 1] [i_2]);
                        arr_11 [i_1] [i_3] [17U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_7)))))) ? (max((((((/* implicit */_Bool) var_4)) ? (arr_8 [(unsigned short)20] [i_1 + 1] [i_1 + 1] [(signed char)5]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(short)8] [(short)8]))))), (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1866))) : (arr_8 [i_1] [i_1] [(short)11] [(short)11]))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)118))) / (((((/* implicit */_Bool) arr_7 [10ULL] [8ULL] [10ULL] [10ULL])) ? (arr_7 [i_0] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) -1996673290))))))));
                        var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)978)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (12525588971499734322ULL))) + (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_1 - 1]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                        arr_14 [i_2] &= ((/* implicit */unsigned int) min((arr_8 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)32768)), (3201110967U))))));
                    }
                }
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_20 [i_1] [i_5] [i_5] [i_1 + 1] [i_1] = max((((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1])) - (((/* implicit */int) arr_15 [i_6] [i_0]))))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))) : (0U))))), (((/* implicit */unsigned int) ((signed char) var_15))));
                        var_24 = ((/* implicit */long long int) min((var_24), (var_4)));
                    }
                    arr_21 [0] [i_1] = ((/* implicit */unsigned short) var_13);
                    var_25 = ((/* implicit */unsigned short) var_1);
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)768)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-768)))))) : ((-(arr_17 [i_1] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_27 [i_0] [(short)5] [i_0] [i_1] [i_0] [i_0] [2LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (64) : (((/* implicit */int) arr_9 [i_1] [i_1 + 1]))))) || (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -7403886226307275215LL))) && (((/* implicit */_Bool) arr_16 [i_1 + 1] [i_5] [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) arr_22 [i_1 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44344)) ? (5392198004589619702LL) : (var_10)))))))));
                            arr_28 [i_1] = ((/* implicit */short) ((unsigned char) ((long long int) var_15)));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            var_27 -= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) ((arr_26 [i_9]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                            var_28 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((arr_2 [i_9] [i_9]), (arr_2 [i_0] [i_0])))), (((unsigned long long int) arr_4 [i_7 + 1] [18LL])))) - (((/* implicit */unsigned long long int) arr_1 [i_5]))));
                            var_29 += ((/* implicit */unsigned int) var_4);
                            var_30 = ((/* implicit */signed char) ((unsigned int) arr_19 [i_1] [i_7 + 2]));
                        }
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) min((1287435497003257847LL), (((/* implicit */long long int) 4294967291U)))))));
                            var_32 = var_16;
                        }
                        var_33 = ((/* implicit */unsigned int) arr_4 [i_5] [i_1]);
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    arr_37 [i_0] [i_1] [i_11] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))) * (1451124649U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175)))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        arr_42 [i_0] |= ((/* implicit */short) var_9);
                        var_34 = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11] [i_11] [i_1] [i_0]))) & (10040698778027253076ULL))), (((/* implicit */unsigned long long int) arr_36 [i_1] [i_11] [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)198)))))));
                        var_35 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_11] [i_12]))))), (((/* implicit */unsigned long long int) arr_23 [i_11] [i_1] [i_11] [i_11] [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_2)))))))));
                    }
                    arr_43 [i_11] [i_1] [i_1] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_1 + 1] [i_1] [i_1 - 1])) - (((/* implicit */int) arr_33 [i_1 + 1] [(unsigned short)17] [i_1 - 1]))))), ((+(((((/* implicit */_Bool) arr_16 [i_0] [7] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) : (1470549885702463829ULL))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    var_36 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (arr_45 [i_13] [i_1] [i_1])));
                    var_37 = ((arr_40 [i_0] [2U] [i_1 + 1] [i_13]) ? (max((((/* implicit */unsigned long long int) (~(arr_44 [i_0] [i_1 + 1] [i_1] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55562))) % (750240968795870916ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (short)-19017)) : (((/* implicit */int) arr_40 [8LL] [8LL] [8LL] [8LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((arr_45 [i_1] [i_1] [i_1]) >> (((16777152) - (16777119))))))));
                }
                arr_47 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_34 [20U] [i_1] [i_1] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1]))))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned int) (unsigned char)6);
}
