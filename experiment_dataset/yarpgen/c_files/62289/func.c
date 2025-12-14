/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62289
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) var_0);
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_12)))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27278))) & (arr_4 [12LL] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54364))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))) > (arr_9 [i_2] [i_2])))))))));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) (((+(-976382074231072145LL))) % (((/* implicit */long long int) var_8))))) : (min((arr_9 [i_2] [i_1]), (((/* implicit */unsigned long long int) ((unsigned short) var_5)))))));
                    arr_11 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)11172))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((var_2), (((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30))) : (arr_5 [i_1])))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_16 = arr_1 [i_2];
                        var_17 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45803))) + (arr_9 [i_2] [i_2])))) / (((/* implicit */unsigned long long int) (~(arr_14 [i_2] [i_0]))))));
                        var_18 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        var_19 ^= ((/* implicit */signed char) (short)-27848);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            arr_21 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_3 [i_4])), (((((/* implicit */_Bool) ((unsigned short) (unsigned short)11172))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (((unsigned long long int) (short)-27346))))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (short)27847))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_12) : (max((8640394357912995562LL), (-5159920158010328476LL)))));
                            var_22 ^= ((/* implicit */long long int) ((((arr_1 [i_0]) % (arr_1 [i_0]))) != ((-(max((((/* implicit */long long int) (unsigned short)5282)), (arr_18 [(unsigned char)0] [i_6] [i_4] [(unsigned char)0] [i_1] [(unsigned char)0] [(unsigned char)0])))))));
                            var_23 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) max(((unsigned short)30), (((/* implicit */unsigned short) (short)-31062))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) max(((unsigned short)65506), (((/* implicit */unsigned short) (signed char)84)))))))));
                            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(var_12))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)26658)))))))) ? (min((arr_17 [i_0] [i_1] [i_2] [i_4] [i_6]), (arr_17 [i_6] [i_4] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_11)))))))));
                            var_25 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1])))) ? ((~(((/* implicit */int) max((var_1), ((signed char)95)))))) : ((~(((/* implicit */int) var_0))))));
                        }
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)7152)))) * (((((((/* implicit */int) (unsigned char)147)) & (((/* implicit */int) (short)-27843)))) & (max((((/* implicit */int) (unsigned short)18)), (var_8))))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_27 ^= ((unsigned short) var_2);
                            var_28 = ((/* implicit */int) max((var_2), (((/* implicit */unsigned int) ((signed char) arr_7 [i_0] [i_1] [i_0] [i_4])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            arr_32 [i_8] [i_4] [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_2] [i_4] [i_8])) ? (((((arr_0 [i_4] [i_4]) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_1] [i_2] [i_4] [i_4] [i_8])) : (((/* implicit */int) arr_6 [i_0] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [i_2] [i_1] [i_2] [i_4] [i_8] [i_2] [(_Bool)1]))))));
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)79)) ^ (((/* implicit */int) var_0))))) < (var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65506))))) : (((/* implicit */int) ((((/* implicit */int) (short)-27857)) > (((/* implicit */int) (unsigned short)30)))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37211)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27344))) : (17592186044415LL)));
                        }
                        var_31 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_25 [i_0] [i_1] [(short)6] [i_4] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))) != (((/* implicit */int) (short)27345)))) ? (((/* implicit */int) min(((unsigned short)64969), (((/* implicit */unsigned short) (_Bool)1))))) : ((~(((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)0))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_32 = ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)28324)))) % (max((7735374077080732668LL), (((/* implicit */long long int) (unsigned short)2016)))))) & (max((((arr_0 [i_0] [i_1]) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_8)))));
                        arr_36 [i_2] [i_2] [i_2] [i_9] [i_2] = var_3;
                        var_33 ^= ((/* implicit */long long int) var_9);
                        arr_37 [i_2] = max((var_7), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_13))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */_Bool) var_4);
}
