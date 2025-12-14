/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62943
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) 1329213650)) * (arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_0 - 2]) | (arr_2 [i_0 - 2] [(_Bool)1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_14 &= ((/* implicit */int) arr_9 [i_0] [(unsigned short)0] [(unsigned short)0]);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_16 [i_2] [i_2] = (!(((/* implicit */_Bool) ((-1541865137) % ((-2147483647 - 1))))));
                            var_15 = ((/* implicit */unsigned short) ((-1541865139) >= (((/* implicit */int) arr_11 [i_2] [i_2] [i_2 + 1]))));
                            var_16 += ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_1] [i_1]))));
                            arr_17 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_4]))));
                            var_17 = (-(((/* implicit */int) arr_12 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_4] [i_4] [i_2 + 1])));
                        }
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_2 - 1]))));
                            var_19 = (~(1329213650));
                            arr_20 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) (unsigned char)121);
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((1586351365U) * (3165136346U))) >= (((((/* implicit */_Bool) (short)-32751)) ? (arr_5 [(signed char)6] [(signed char)6] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [15]))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1329213650)))) || (((/* implicit */_Bool) ((arr_0 [i_1] [i_3]) << (((((/* implicit */int) (unsigned short)9503)) - (9501))))))));
                            arr_25 [i_0] [i_2] [i_1] [i_1] [i_1] [(unsigned short)9] [7U] = -1541865141;
                        }
                        var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_18 [i_0] [7] [7] [i_0] [i_3])))) ? (((/* implicit */unsigned int) -1541865129)) : (arr_5 [i_1] [i_2 + 1] [(unsigned short)15])));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
    {
        arr_30 [i_7 + 1] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 1329213650)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (arr_2 [18ULL] [18ULL]))) + (((/* implicit */long long int) max((((/* implicit */int) arr_28 [7U])), (1541865132)))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1329213651)) + (max((arr_10 [i_7] [i_7] [(unsigned char)11] [i_7] [i_7]), (((/* implicit */unsigned int) 1306242743)))))))));
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) min((arr_4 [i_7 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_7] [9LL])))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)43))))) + (1369612457U)))));
        arr_31 [(signed char)13] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_7] [(unsigned short)12]), (((/* implicit */unsigned int) 1541865141))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) (short)32742)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned int) 1541865140)) % (arr_1 [i_7] [i_7])))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7]))) | (arr_1 [i_7] [i_7])))) ? (((/* implicit */long long int) ((arr_24 [i_7] [(short)4] [i_7] [i_7 - 2] [i_7]) & (((/* implicit */int) (short)5710))))) : (min((((/* implicit */long long int) 1541865137)), ((-9223372036854775807LL - 1LL))))))));
        var_24 |= max(((-(((arr_5 [i_7] [13ULL] [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [i_7] [i_7]))))))));
    }
    var_25 ^= ((/* implicit */int) max((((max((8930805308380970641LL), (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) max((-1541865132), (-1541865137)))))), (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) (unsigned char)53))))), ((-(((/* implicit */int) (unsigned short)25095)))))))));
    var_26 = ((((/* implicit */int) max((max((((/* implicit */short) var_0)), ((short)1764))), (((/* implicit */short) var_3))))) % (max((min((-1329213651), (((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)32739)))))));
    var_27 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((var_7) <= (((/* implicit */long long int) -1541865133))))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_1))))))));
}
