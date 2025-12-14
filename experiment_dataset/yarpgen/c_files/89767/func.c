/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89767
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) << (((max((max((((/* implicit */unsigned long long int) var_5)), (var_0))), (var_0))) - (18446744073709551514ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)85))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1])), (64211531U)))) ? (63584306148235132LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (4230755765U)))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)-11095)))));
                var_14 = ((/* implicit */unsigned char) arr_0 [i_1 + 2]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_15 *= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_3] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2] [i_2 + 1]))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3 - 2] [i_3 + 1])) ? (arr_16 [i_2 + 1] [i_3 - 2]) : (arr_16 [i_2 + 1] [i_3 - 2])))))));
                            arr_20 [14ULL] = (~((-(((/* implicit */int) max((arr_12 [i_6] [i_5] [i_2 + 1]), (((/* implicit */unsigned char) arr_19 [i_2] [i_2] [i_2 + 1] [2LL] [i_2]))))))));
                            var_17 += ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)170)) || (((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_3] [i_3] [i_2])))))) < (arr_8 [1LL] [i_2 + 1])))), ((unsigned char)180)));
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2 + 1] [i_3 - 2] [i_2 + 1]))))) ? ((~(arr_8 [i_3 - 1] [i_2 + 1]))) : (min((arr_8 [i_3 + 2] [i_2 + 1]), (arr_8 [i_3 - 1] [i_2 + 1])))));
                            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)175)) != (-1089802748)));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_3])) || (((/* implicit */_Bool) arr_16 [i_2] [i_2]))))), (arr_11 [i_2] [i_2])))) ? (((/* implicit */int) max(((short)15), ((short)-15)))) : ((~(((/* implicit */int) ((signed char) (unsigned char)85)))))));
                            arr_24 [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_2] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_3 + 1] [i_4]))) > (arr_8 [i_2] [i_3 - 1]))))))));
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) (~((~(6124252683115941019ULL)))));
                            arr_29 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)102)), (var_8)))))))));
                            arr_30 [i_2] [i_2] [i_2] [i_5] [(unsigned char)13] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 2])) <= (arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 + 2] [i_8])))), (max((arr_14 [i_3 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_14 [i_3 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                        }
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_5] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */int) max((arr_19 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]), (arr_19 [16ULL] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1])))) >= (((/* implicit */int) min((arr_19 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2]), (arr_19 [i_2] [i_2 + 1] [i_2 + 1] [7] [i_2]))))));
                            var_20 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_11 [i_3 + 2] [i_2 + 1])) : (((/* implicit */int) arr_13 [i_3 - 1] [i_2 + 1] [i_4])))))));
                            arr_34 [i_2] [i_3] [i_9] [i_5] [i_5] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_2] [i_3 - 1] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 1] [i_3 - 2] [i_5] [i_9]))) : (((((/* implicit */_Bool) (short)-18)) ? (6124252683115941019ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_3 - 2] [i_4] [i_4] [i_2]))))))) << (((((long long int) arr_7 [i_2 + 1])) - (662LL)))));
                            arr_35 [i_2] [i_4] [i_5] = (-(((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_3 - 2] [i_4] [i_5] [i_5])) ? (((((/* implicit */int) arr_9 [i_2] [i_2 + 1] [(short)5])) * (((/* implicit */int) arr_25 [i_4] [i_2] [i_2])))) : (((/* implicit */int) (signed char)-101)))));
                        }
                        arr_36 [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) max((((/* implicit */short) arr_31 [i_2 + 1] [i_3] [i_4])), ((short)9))))))));
                    }
                    var_21 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4] [i_4] [i_4])) % (((/* implicit */int) arr_9 [i_2] [i_2] [11U]))))))))));
                    var_22 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-66)), ((unsigned char)180)))))) ? (((/* implicit */int) arr_25 [15] [i_3] [i_3 + 2])) : (min(((~(-1025310808))), (((/* implicit */int) arr_9 [i_2 + 1] [i_3 - 2] [i_4])))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (((~(min((-2078416269323736719LL), (((/* implicit */long long int) (unsigned char)224)))))) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_2] [i_3] [i_3 - 2])) ? (arr_8 [i_2] [(_Bool)1]) : (arr_32 [i_2 + 1] [i_2 + 1] [(_Bool)1] [i_2 + 1] [i_4]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((64211510U) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((unsigned short) var_6));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) var_6)))));
}
