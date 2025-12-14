/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77777
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38247))) - (2460899848U)))) ? (((/* implicit */long long int) 1834067448U)) : (((15LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (747689725)))) - (((((/* implicit */_Bool) -554336461)) ? (-3037514703093708935LL) : (((/* implicit */long long int) 2460899849U))))))));
                arr_5 [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                var_13 = ((/* implicit */long long int) ((-747689735) | (((((((/* implicit */_Bool) 747689742)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)52723)))) | ((((_Bool)1) ? (554336479) : (((/* implicit */int) (unsigned short)15963))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((((-554336480) <= (-747689742))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)250)) ^ (-747689739)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64914))) : (0U))))) != (((/* implicit */unsigned int) -554336480))));
                            var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -554336479)) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -554336479)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12812))))) != (((((/* implicit */long long int) 4294967271U)) + (-8433145548645514843LL)))))) : (((/* implicit */int) (unsigned short)24802))));
                            var_16 = -2147483631;
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (_Bool)1);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((((((_Bool)1) ? (-8433145548645514843LL) : (((/* implicit */long long int) 14U)))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))))) - (9223372036854775807LL)))))) ? (1834067447U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
