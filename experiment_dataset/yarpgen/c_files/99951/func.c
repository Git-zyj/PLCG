/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99951
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
    var_19 += var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((var_10) << (((((/* implicit */int) (unsigned short)32784)) - (32747))))))) == (((((/* implicit */_Bool) max((arr_6 [5ULL] [i_0] [i_2] [i_2]), (((/* implicit */long long int) var_15))))) ? (((/* implicit */unsigned long long int) 4395899027456LL)) : (arr_4 [i_0 + 2] [(signed char)0] [i_0 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_0] [(short)5] [i_0] [3ULL] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (0ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(_Bool)0])))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) 123145302310912LL)) & (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                                var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) 15524355900431945596ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_3] [i_3]))) : (max((((/* implicit */unsigned long long int) (short)10637)), (arr_2 [i_0] [i_3])))))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32767))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) (-(var_8)));
                                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_14 [3LL] [3LL] [i_0] [i_0 - 1]) > (arr_14 [(short)8] [i_1 + 1] [i_0] [i_0 + 2]))))));
                                arr_19 [i_5] [i_5] [i_0] [i_2] [i_0] [(_Bool)1] [i_0 + 2] = ((/* implicit */unsigned short) max(((~(arr_14 [i_6] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_18))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) arr_1 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) 8960426486598005103LL);
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)3)), (((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_14 [i_0 + 1] [i_0] [i_8] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_8]))))))) ? (((unsigned long long int) arr_8 [i_8 - 2] [(unsigned char)6] [i_2] [i_2] [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32658), (((/* implicit */short) min((arr_15 [i_8]), (((/* implicit */signed char) arr_18 [i_8] [i_1 - 1] [i_7] [i_7 - 1] [i_8 - 2])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) min(((signed char)-32), (((/* implicit */signed char) (_Bool)1))))))));
    var_29 = var_11;
    var_30 = var_5;
}
