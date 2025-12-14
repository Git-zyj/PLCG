/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57686
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)93)))))))));
                var_15 += ((/* implicit */_Bool) (signed char)-96);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_16 += max(((!(((/* implicit */_Bool) 815350838217758776ULL)))), ((((+(var_13))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) != (453274052497686413ULL))))))));
                        var_17 = ((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (unsigned short)26324)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48207))))) && (((/* implicit */_Bool) (unsigned short)0)))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)20144), (((/* implicit */short) (_Bool)0))))) ? (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)51899)) : (((/* implicit */int) var_2)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535))))));
                        var_19 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) <= (min((6112461103479953392ULL), (((/* implicit */unsigned long long int) (-(2908101078U))))))));
                    }
                    arr_13 [i_2] [i_1] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_1 - 2] [i_5] = var_11;
                            arr_21 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_3);
                            arr_22 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)127))));
                            var_20 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))));
                            var_21 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32028)) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_28 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), (var_0))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)56))))));
                            arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */int) max((var_2), (((/* implicit */short) var_10))))), (((((/* implicit */int) (signed char)48)) << (((((/* implicit */int) (signed char)26)) - (20))))))) & (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((long long int) var_4));
}
