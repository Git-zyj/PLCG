/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67625
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) == (((/* implicit */unsigned long long int) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) <= (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(short)10] [i_1] = ((/* implicit */short) ((((-1307996778) % (((/* implicit */int) (short)3881)))) > (((/* implicit */int) (unsigned short)64500))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) + (((/* implicit */int) (signed char)0))))) / (arr_1 [i_1 + 2] [i_1 + 1]))) << (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) var_5)))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)104)) % (((/* implicit */int) (short)-3879)))) >> (((/* implicit */int) (signed char)26)))) ^ (((/* implicit */int) ((((/* implicit */int) (short)3881)) < (((/* implicit */int) var_11)))))));
                            arr_10 [(unsigned short)20] [21U] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) || (((/* implicit */_Bool) (unsigned short)32256))))) | (((((/* implicit */int) (short)3875)) ^ (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned short)64500)))) | (((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_0])) ^ (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 3; i_4 < 11; i_4 += 2) 
    {
        for (unsigned int i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */int) ((var_9) > (((/* implicit */int) var_1))))) <= (((/* implicit */int) (signed char)102)))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >> (((var_10) - (5546676011362695470ULL))))) | (((/* implicit */int) ((((/* implicit */int) (short)1971)) <= (((/* implicit */int) arr_0 [i_5])))))))))))));
                arr_15 [i_4] [(short)11] = ((/* implicit */unsigned short) ((((4533002222682724583ULL) >> (((((/* implicit */int) (unsigned short)57032)) - (57009))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                arr_16 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) << (((/* implicit */int) (signed char)2)))) >> (((((arr_13 [i_4 + 1] [i_5 - 3] [i_4 + 1]) ^ (((/* implicit */unsigned long long int) arr_3 [i_4 + 1] [i_5 - 2] [i_4])))) - (5048113065237821567ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-3882)) & (((/* implicit */int) (short)-1972)))) + (2147483647))) << (((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_17 [i_4 - 3] [i_4 - 3] [i_5 - 3])))) - (1509858))))))));
                            arr_22 [i_7] [i_6] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_4] [i_4 + 1])) <= (((/* implicit */int) arr_17 [(unsigned char)3] [i_4] [i_4 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
