/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60122
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)23562)))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))) / (arr_2 [i_1]))), (((unsigned long long int) (unsigned short)23562)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))) == (((/* implicit */int) ((unsigned short) arr_2 [i_0])))))), (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) ((_Bool) (unsigned short)23562)))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1]))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0])))))) != ((~(((/* implicit */int) max(((unsigned short)23562), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((var_8) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (short)20090)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 7; i_4 += 2) 
            {
                {
                    var_17 |= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */unsigned short) ((_Bool) (unsigned short)23562))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)41993)) != ((((_Bool)0) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_4 [i_2] [i_2])))))) ? (max((((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)63)))), (((/* implicit */int) arr_3 [i_2] [i_2] [i_6 + 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_2] [i_3] [i_5] [i_5] [i_6 - 1] [i_6 + 1] [(_Bool)1])), ((unsigned short)11271))))));
                                var_19 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_2] [(signed char)8] [i_4]))))) ? (((((/* implicit */int) arr_3 [i_2] [i_2] [i_6 - 1])) * (((/* implicit */int) arr_3 [i_5] [i_5] [i_6])))) : (((/* implicit */int) max((((/* implicit */short) arr_17 [i_2] [i_3] [i_2] [i_5] [i_6 + 1] [i_2])), ((short)3415)))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_8 [i_6 - 1] [i_5])))))) : (((long long int) (-(((/* implicit */int) (unsigned short)23565)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 8; i_7 += 4) 
                    {
                        arr_22 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_25 [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((17202164687494084226ULL) | (((/* implicit */unsigned long long int) arr_15 [i_4] [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1] [i_4])))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned short)41959))));
                            var_22 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7] [i_2] [i_7 + 2] [i_7 + 2] [i_7])) ? (arr_24 [i_7] [i_2] [i_7 + 2] [i_7 + 2] [i_7]) : (arr_24 [i_7] [i_2] [i_7 + 2] [i_7 + 2] [(_Bool)1])))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2] [i_2]))))), ((~(var_8)))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_3] [i_7 + 3])))) | (((/* implicit */int) arr_1 [i_7] [i_7 + 3]))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */int) (unsigned char)77)), (((((/* implicit */_Bool) arr_1 [i_4 + 3] [i_4])) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) arr_1 [i_4 - 1] [i_7 - 1])))))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(unsigned char)10] [i_4] [i_4] [i_4] [i_4 - 3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_4] [6LL]))))), (((long long int) arr_12 [i_2] [i_3] [i_2] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-22936)) - (((/* implicit */int) arr_14 [i_4] [i_4] [i_4]))))) || ((!(((/* implicit */_Bool) arr_1 [i_2] [i_9])))))))) : ((((((_Bool)1) || (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])))) ? (arr_11 [i_2] [i_2] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8184))))))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_32 [i_2] [i_3] [i_4] [i_4] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((4441021973748396242ULL), (14513387786986225697ULL))), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) min(((_Bool)1), ((!(arr_3 [i_4] [i_3] [i_3])))))) : ((-(((/* implicit */int) arr_4 [i_7] [i_10]))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)35408)), (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [8ULL] [i_7 + 2])) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((signed char) (unsigned char)189))) : (((/* implicit */int) max((((unsigned short) (unsigned short)23589)), (((/* implicit */unsigned short) ((_Bool) (unsigned char)77)))))))))));
                        }
                        arr_33 [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)215)) / (((/* implicit */int) ((signed char) ((arr_21 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) : (9982913869292119223ULL)))))));
                        var_27 = ((/* implicit */long long int) max((var_27), ((+(min((((/* implicit */long long int) arr_14 [i_7 + 2] [i_7 - 1] [i_4 - 2])), (arr_15 [i_2] [i_7 + 2] [i_7] [i_7 + 2] [i_7] [i_7] [i_2])))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)107)), ((unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (17592181850112ULL))) & (6304799646719409225ULL))))));
}
