/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90632
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
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((short) (_Bool)1)))))), (min((min((13020237197495627639ULL), (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((/* implicit */unsigned long long int) 25960447U))))));
                    var_20 = ((/* implicit */unsigned int) ((long long int) arr_4 [i_1]));
                    arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_2]))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_4 [i_0]);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 148821514U)) ? (((/* implicit */int) arr_8 [i_0] [i_4 - 3] [i_4 + 1] [i_4 + 4])) : (((/* implicit */int) arr_8 [i_0] [i_4 + 3] [i_4 + 1] [i_4 + 4]))));
                        arr_14 [i_4] [i_4 - 3] [i_3] [i_1] [i_0] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (25960441U));
                    }
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((((unsigned long long int) arr_7 [i_0])) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_3] [i_5] [i_3] [i_5])) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_18 [i_0] [i_1] [i_3] [i_5] = ((/* implicit */short) 1622424354);
                        /* LoopSeq 4 */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_1]));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_3] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_6])) == (((/* implicit */int) arr_4 [i_6]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_12 [i_6] [i_5] [i_5] [i_3] [i_1] [i_0])) : (((/* implicit */int) var_3))))));
                        }
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) (signed char)62);
                            arr_25 [i_7] [i_5] [i_3] [i_3] [i_1] [i_7] = ((/* implicit */_Bool) 2944745944999689140ULL);
                        }
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) ((15501998128709862494ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_8 - 2] [i_8 + 1]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((short) arr_31 [i_9] [i_5] [i_1]));
                            var_30 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_20 [i_0] [i_0])));
                            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        }
                        var_33 = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
                    }
                    arr_33 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0]))))) || (((/* implicit */_Bool) (unsigned char)70))));
                }
                arr_34 [i_0] = ((/* implicit */unsigned short) min((3331697492027569786ULL), (((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_0]) ? (arr_20 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]))))))));
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) / (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))));
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) (unsigned char)145);
                                arr_44 [i_11] [i_11] [i_11] = ((/* implicit */short) ((unsigned short) max((min((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_10] [i_11] [i_12])), (10974069549998464107ULL))), (((/* implicit */unsigned long long int) (signed char)-62)))));
                                var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_10] [i_10] [i_12 + 1] [i_10])) : (arr_10 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_12 + 2]))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_11] [i_0] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_10] [i_0] [i_12 - 1]))) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_32 [i_12] [i_11] [i_10] [i_1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_28 [i_0] [i_1] [i_10] [i_11] [i_12]) : (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_11])))))))))));
                                arr_45 [i_12 - 1] [i_1] [i_10] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_28 [i_12 - 1] [i_1] [i_10] [i_11] [i_12])) || (((/* implicit */_Bool) arr_39 [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 - 2] [i_12 + 3] [i_1])))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) : (3521505568U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
