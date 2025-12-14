/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81433
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1537054126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2186768830U)))))))) ? (((-239473819) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15963798350774057055ULL)) ? (-1349087202) : (((/* implicit */int) (unsigned char)11)))))))));
                                var_18 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)26016)) & (((/* implicit */int) (unsigned short)47638))))))));
                            }
                        } 
                    } 
                } 
                var_19 = max((((/* implicit */unsigned char) var_12)), (var_7));
                var_20 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(5459738825774348270LL)))), (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34297))) : (15963798350774057054ULL)))));
                var_21 = ((/* implicit */int) ((_Bool) (short)18706));
            }
        } 
    } 
    var_22 -= ((unsigned short) (+(var_5)));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            {
                var_23 += ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                var_24 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */long long int) arr_15 [i_6 + 2] [i_6])), (var_4))));
            }
        } 
    } 
}
