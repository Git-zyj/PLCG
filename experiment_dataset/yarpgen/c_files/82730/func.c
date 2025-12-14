/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82730
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)29)), (var_6)))) ? (((/* implicit */int) (unsigned short)59015)) : (((((/* implicit */int) (unsigned short)59002)) + (((/* implicit */int) (signed char)119))))))) ? (var_17) : (((1660792238) / (((/* implicit */int) (unsigned short)15872))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_20 = ((/* implicit */long long int) arr_1 [i_0] [i_2]);
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_5 [i_0] [i_1] [i_1]))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) | (max((((/* implicit */long long int) var_4)), (6439973889741166775LL))))) : (((/* implicit */long long int) ((((1660792249) > (((/* implicit */int) var_18)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)49662)) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) : (((/* implicit */int) (signed char)-117)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            var_22 &= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)6537)) == (((/* implicit */int) (short)-27998))))) >> (((((/* implicit */int) var_5)) - (77)))))), (((min((arr_2 [i_0]), (((/* implicit */long long int) (_Bool)1)))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_4] [i_3] [i_2] [i_1] [i_1 - 4] [i_0])), (4294967295U))))))));
                            arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((arr_4 [i_3] [i_1] [i_3]) != (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3] [i_0]))) : (((unsigned int) var_1)))))));
                            arr_16 [i_0] [i_0] = ((/* implicit */long long int) min((((((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_4])))) > ((-(((/* implicit */int) var_2)))))), ((((~(((/* implicit */int) arr_5 [i_4] [i_2] [i_0])))) == (((/* implicit */int) arr_3 [i_0]))))));
                            var_23 = ((/* implicit */long long int) ((((((-1159492117) ^ (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_18)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) >= (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_0 [i_3 + 1]) : (((/* implicit */int) (signed char)-1))))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)19201))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-63)) ? (1660792208) : (((((/* implicit */int) (unsigned short)14542)) << (((((((/* implicit */int) (signed char)-43)) + (62))) - (14)))))));
                            var_26 = ((((/* implicit */_Bool) var_18)) ? (arr_8 [i_3 - 2] [i_1] [i_1 - 2]) : (((/* implicit */int) var_0)));
                            var_27 *= ((/* implicit */_Bool) var_1);
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))));
                            arr_24 [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1660792235)) ? (((/* implicit */int) arr_11 [i_1 - 2] [i_1] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_6])) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned short)6546)) : (arr_0 [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (arr_4 [i_1] [i_1] [i_1])));
                        }
                        arr_25 [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((((/* implicit */_Bool) (signed char)-127)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) | (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-9223372036854775783LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0])) | (min((-1660792209), (-1159492111)))))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_29 |= ((/* implicit */long long int) (signed char)-71);
                        var_30 = var_9;
                        arr_29 [i_7] [i_7] [i_2] [i_1 - 4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (short)19210)) : (((/* implicit */int) (short)-32756))));
                    }
                }
                arr_30 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 3])) ? (var_11) : (((/* implicit */int) (unsigned short)36662)))) < (max((5), (((/* implicit */int) (short)4667))))));
            }
        } 
    } 
    var_31 += ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) ^ ((~(((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))))));
    var_32 = ((/* implicit */long long int) var_6);
}
