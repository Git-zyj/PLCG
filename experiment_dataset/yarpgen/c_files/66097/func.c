/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66097
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)10894)), (-895805059)))) ? (((((/* implicit */_Bool) arr_5 [(signed char)10] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) : (8473759152025476394LL))) : (((((/* implicit */_Bool) arr_5 [18ULL] [i_1])) ? (-8473759152025476413LL) : (2611255871817842006LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_15 *= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (2611255871817842030LL) : (274877906942LL))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_16 = ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_2 - 1] [i_4]))) | (274877906942LL));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) ((arr_3 [i_3] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_2 - 2] [i_2 + 1] [i_2] [i_2])))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (signed char)-113)))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (9157835722657117009LL) : (-4111704685857529455LL))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1LL)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_19 &= ((/* implicit */unsigned long long int) (unsigned char)98);
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
                            arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)118)) ? (15411786744755651680ULL) : (((/* implicit */unsigned long long int) 1073741816))));
                            arr_22 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65521))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14726828550415877231ULL)) ? (-2611255871817842017LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53473)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            arr_25 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) arr_18 [i_1 - 3] [i_1] [i_2 - 2] [i_1] [i_7]));
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_1 - 1])) ? (((long long int) arr_4 [i_7])) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4111704685857529444LL)) ? (4111704685857529454LL) : (((/* implicit */long long int) -1398527196))))) ^ (15339983813251123432ULL)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            arr_28 [i_8] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_8] [i_3] [i_2 - 1] [i_2 - 2] [i_1 - 2]))));
                            var_23 = ((/* implicit */long long int) 5345030157015031650ULL);
                            arr_29 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (-3752317705133501893LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1 + 2] [i_3])))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_1] [i_1] [i_2] [i_8]))) ? (((/* implicit */int) ((unsigned short) 4111704685857529455LL))) : (((((/* implicit */_Bool) (unsigned short)54786)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6))))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_26 [i_0] [i_1] [i_2] [i_1] [i_1]))) ? (((((-3653385719068186170LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)54786)) - (54779))))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2])))));
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) 884516763982627419LL));
                    }
                    var_27 ^= var_11;
                }
            } 
        } 
    } 
    var_28 = var_7;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 3) 
        {
            {
                arr_36 [i_10] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (((unsigned short) var_12))));
                var_29 = ((((/* implicit */long long int) -1398527193)) * (((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) / (arr_30 [i_10 - 1] [i_10 - 1]))));
            }
        } 
    } 
}
