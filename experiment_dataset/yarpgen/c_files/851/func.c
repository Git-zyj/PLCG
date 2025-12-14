/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/851
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] &= arr_6 [i_0] [i_2] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) arr_3 [i_0 + 1] [i_1 + 4])) : (-6389587390147226725LL)))));
                                arr_15 [i_0] [i_2] [i_0] [i_3] [i_4 - 1] = ((/* implicit */int) 9223372036854775807LL);
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37318)) - ((-(((/* implicit */int) (_Bool)0))))))), (arr_10 [i_0 + 2] [i_1] [i_0] [i_3] [i_3] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((arr_19 [i_5 - 1] [i_6] [i_5 - 3]) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) arr_19 [i_5] [i_6] [i_5 - 1])))))) ? (((unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37318)) - (((/* implicit */int) (short)32704)))))));
                var_23 = ((/* implicit */unsigned long long int) (+((~(arr_17 [i_5])))));
                var_24 = ((/* implicit */unsigned short) (((_Bool)1) ? (min((((/* implicit */int) (_Bool)1)), (arr_18 [i_6] [i_5 + 1]))) : ((+(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))))))));
                var_25 = ((/* implicit */unsigned short) min((var_25), ((unsigned short)4096)));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 18446744073709551613ULL))));
                            var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(566647702U)))) ? (((/* implicit */unsigned int) ((arr_24 [i_5] [i_5] [i_5] [i_5]) / (arr_18 [i_7] [i_5])))) : (((((/* implicit */_Bool) 13384833425578668940ULL)) ? (637114390U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
