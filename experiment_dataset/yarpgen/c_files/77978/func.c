/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77978
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
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 16380)), (((((/* implicit */_Bool) 16380)) ? (((/* implicit */unsigned int) -16383)) : (1536U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [(signed char)17] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((830532871U), (1556935937U)))) ? ((+(arr_12 [(signed char)0] [i_1] [i_2] [8] [i_4]))) : (max((arr_12 [i_0] [10] [(_Bool)1] [i_3] [i_4]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [12U]))))) ? (((long long int) 2738031350U)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))));
                                var_21 = ((/* implicit */unsigned short) ((int) max((arr_2 [i_4]), (arr_2 [3LL]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) var_0);
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((67553994410557440LL), (((/* implicit */long long int) (signed char)127))))) ? (arr_12 [i_0] [i_0] [(signed char)7] [i_1] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_13 [i_0] [i_2] [(signed char)0] [i_2] [i_0] [i_1] [3LL])) : (arr_10 [i_0] [i_1] [3] [i_2] [9LL]))))));
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (1807087528U)));
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_2])), ((+(arr_10 [i_0] [(signed char)0] [i_1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 24; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            arr_25 [i_7] [i_6] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_8])) ? (arr_19 [(unsigned char)23]) : (arr_19 [i_8]))) << ((((((+(((((/* implicit */int) var_7)) * (((/* implicit */int) (signed char)-14)))))) + (1069))) - (5)))));
                            var_25 = ((/* implicit */unsigned char) var_6);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_5] [i_7] [i_7 - 1])), (arr_21 [i_7] [i_6])))) ? (min((((/* implicit */int) arr_17 [i_7])), (var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_6])))))))) ? (((/* implicit */unsigned int) min((max((((/* implicit */int) arr_18 [8U] [i_7 + 1])), (var_5))), (min((16366), (((/* implicit */int) (signed char)123))))))) : (min((((/* implicit */unsigned int) var_7)), (min((2738031360U), (1556935935U)))))));
                            var_27 = ((/* implicit */long long int) var_15);
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_22 [6LL] [i_5] [6LL]))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) min((((((/* implicit */_Bool) -1570776746)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (((((/* implicit */_Bool) 2738031325U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) : (1556935984U))))), (4264951659U))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2738031360U)) ? (319327705) : (-16365)));
    var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (-1829143963) : (((/* implicit */int) var_10)))) & (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-126)), (var_16))))))) ? (max((var_0), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
