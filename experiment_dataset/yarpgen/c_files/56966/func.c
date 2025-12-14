/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56966
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((13835058055282163712ULL), (1644236454243975880ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)138)) + (((/* implicit */int) (unsigned char)255)))))))) ? (18446744073709551601ULL) : (((unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) : (13835058055282163712ULL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = 0ULL;
                                var_14 &= max((((((/* implicit */_Bool) 14873894404210466711ULL)) ? (12804669569650024993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))))), (min((3572849669499084905ULL), (((((/* implicit */_Bool) 6722065775640985520LL)) ? (0ULL) : (((/* implicit */unsigned long long int) -1831107777)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) -1831107777);
}
