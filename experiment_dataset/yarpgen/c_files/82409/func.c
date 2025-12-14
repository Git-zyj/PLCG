/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82409
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
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 4])) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
                var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) (unsigned short)10482))))));
                var_16 ^= ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((var_5) >> (((arr_4 [i_0 - 2] [i_1 - 2]) + (1165075647)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) == (min((var_10), (((/* implicit */long long int) var_9)))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) (short)27439))) * (0LL))))));
                arr_5 [i_1] [i_1] [i_1] = (signed char)12;
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_0 + 1])))) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) == (((/* implicit */int) arr_3 [i_0 - 1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [14LL] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (+((+(arr_14 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])))));
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 2]))))), (min((arr_9 [i_3 + 2] [i_3]), (arr_9 [i_3 + 4] [i_3])))));
                                var_19 ^= ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-39)) == (((/* implicit */int) (_Bool)0)))) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_5] [i_6]))))) + (12ULL)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    var_21 = var_8;
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned char i_10 = 3; i_10 < 8; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((((/* implicit */int) (unsigned short)54855)) / (((/* implicit */int) max(((unsigned short)10), (((/* implicit */unsigned short) (short)25))))))), (((/* implicit */int) ((8952878399102895947ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16783866004630678964ULL)) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6)))))) : (((((/* implicit */_Bool) (unsigned short)65516)) ? (var_0) : (arr_7 [(signed char)14]))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21454))) + (2429844154U))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((((/* implicit */int) ((unsigned char) var_5))) <= ((-(((/* implicit */int) arr_2 [i_7])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (signed char)-13))))), (((((/* implicit */_Bool) arr_12 [i_8] [i_7] [i_7])) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54841))))))) : (((((((/* implicit */unsigned long long int) var_13)) + (var_0))) & (((/* implicit */unsigned long long int) (+(var_5))))))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)10689)) ? (arr_9 [i_12] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? ((~(min((((/* implicit */unsigned long long int) (_Bool)0)), (3992629082272676838ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                            arr_33 [i_7] [i_8] [i_8] [i_8] [8LL] [i_12 + 2] = ((/* implicit */signed char) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
}
