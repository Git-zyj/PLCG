/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80773
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((((unsigned int) (!(((/* implicit */_Bool) var_7))))) << (((min((((/* implicit */long long int) ((_Bool) 2146865920U))), (-16LL))) + (25LL))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 7274989540521950536LL)) && (((/* implicit */_Bool) arr_4 [i_0])))))))) ? ((~(2148101367U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) 2146865896U))))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)31)) : (((int) (unsigned char)246))))) != (max((((/* implicit */unsigned int) max(((signed char)-10), (arr_4 [3U])))), (2146865924U)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2148101400U)) ? (((/* implicit */int) (short)-8652)) : (((/* implicit */int) (signed char)48))));
                            var_19 = (~(max((((/* implicit */long long int) (((_Bool)1) ? (2146865896U) : (2148101400U)))), (-2906591769994824460LL))));
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_1])) ? (min((((/* implicit */long long int) 1251589720)), (3278635276071812794LL))) : (((/* implicit */long long int) 1991154743))))), ((-(arr_1 [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_1)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2148101371U)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2146865903U))) : (((var_3) ? (2148101376U) : (2146865896U))))))));
    var_22 = ((/* implicit */unsigned int) -1251589719);
}
