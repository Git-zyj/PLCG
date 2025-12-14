/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60420
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
    var_10 ^= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = 8884428572006422515ULL;
                            arr_8 [(unsigned short)8] [i_2] [i_2] [i_2] |= ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) (short)-1184)) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) (short)-1))))), ((~(((((/* implicit */int) var_4)) - (((/* implicit */int) arr_1 [i_0]))))))));
                            arr_9 [i_1] [i_2] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_0)), ((-(arr_2 [i_0] [i_0] [i_0])))))));
                            var_12 = ((/* implicit */short) arr_0 [i_3]);
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) (short)-10673)), (arr_3 [i_1 + 1] [i_1] [i_0])))));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_13 = arr_12 [(short)7] [(short)7] [i_1];
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned char)127))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((((/* implicit */int) ((unsigned short) (short)-11))) >= (((/* implicit */int) (signed char)-64)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (((unsigned char) var_8))))) : (((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_5 + 2] [3ULL])) == (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [6U] [i_6]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47346)))))))));
                                var_16 *= ((/* implicit */int) arr_4 [i_0] [(unsigned char)10] [i_5] [i_6]);
                                arr_19 [i_0] [i_0] [i_4] [i_5] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (8589934591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1] [i_0] [i_4]) && (((/* implicit */_Bool) ((unsigned short) var_5)))));
                    var_17 += ((/* implicit */unsigned long long int) max((max((arr_4 [i_0] [10ULL] [i_4] [i_0]), (((_Bool) arr_4 [i_4] [(short)4] [i_4] [i_4])))), ((!(((/* implicit */_Bool) var_9))))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1] [i_7 - 1])) <= (((((/* implicit */_Bool) (short)-3459)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_8] [i_7 - 1])) : (((/* implicit */int) (signed char)64))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_7] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (arr_0 [(signed char)4])))))))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_1 [i_7 - 2])))))));
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_24 [i_1] [i_1 - 2] [i_1 - 1] [i_1]), (arr_24 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                        }
                    }
                    var_22 -= ((/* implicit */unsigned char) max((((((/* implicit */int) (short)-22939)) * ((-(((/* implicit */int) (signed char)-1)))))), (((((var_1) > (arr_12 [i_0] [i_0] [(signed char)10]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0)))) : ((-(((/* implicit */int) (_Bool)1))))))));
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned short) var_8);
                    var_24 ^= ((/* implicit */unsigned long long int) 9056208296910157705LL);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_3))), ((~(arr_27 [i_0] [0ULL] [(_Bool)1] [6ULL] [i_10]))))))));
                }
                var_26 = (unsigned char)132;
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_2);
    var_28 = ((/* implicit */long long int) ((((/* implicit */long long int) (((-(((/* implicit */int) (short)-1)))) * (((/* implicit */int) (!(var_6))))))) == (var_8)));
}
