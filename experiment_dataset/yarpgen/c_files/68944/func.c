/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68944
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))) && (((((/* implicit */_Bool) var_2)) && ((_Bool)1)))));
                                var_19 = ((/* implicit */_Bool) var_6);
                                var_20 -= ((_Bool) var_4);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (13534187366887209165ULL)))))))));
                            arr_20 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((6454583174231813704ULL) / (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53180))))) ^ (((4912556706822342465ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (+(var_9)))) && (((((((/* implicit */_Bool) 7625943607429913325ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)5024)))) >= (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))));
}
