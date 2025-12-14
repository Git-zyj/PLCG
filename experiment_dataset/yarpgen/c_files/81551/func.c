/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81551
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2140268313)), (arr_4 [i_1] [i_2 - 1])))), ((+(6501583687538410402ULL)))))));
                                var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551609ULL))));
                                var_22 = ((/* implicit */int) max((var_22), (min((min((((/* implicit */int) ((unsigned char) arr_13 [i_0 - 1] [12ULL] [i_2 - 1] [4ULL] [6ULL] [2U]))), (((((/* implicit */int) var_7)) - (var_4))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2616777406U)) ? (6904625458327973196ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [16U]))))) ? (((((/* implicit */_Bool) -5771940013953799862LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2616777380U))))))))));
                            }
                        } 
                    } 
                } 
                var_23 ^= ((long long int) (((_Bool)1) ? (12514193018105703544ULL) : (((/* implicit */unsigned long long int) ((5638992937609088413LL) & (arr_1 [i_1] [i_1]))))));
                var_24 = ((/* implicit */short) (-((-(arr_0 [i_0])))));
                var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (17931767904947659133ULL) : (((/* implicit */unsigned long long int) 2616777386U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) (-(514976168761892469ULL)))));
                var_27 = ((/* implicit */unsigned long long int) arr_15 [23LL]);
            }
        } 
    } 
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) << (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)63))))) ? (var_10) : (((6501583687538410390ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    var_29 -= ((/* implicit */unsigned long long int) min((max((((signed char) -325435713321100795LL)), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((_Bool) 17931767904947659163ULL)))));
}
