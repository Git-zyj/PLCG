/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64475
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
    var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_4)) ? (-8811059288756265136LL) : (var_14))) * (((/* implicit */long long int) ((/* implicit */int) ((933701517U) != (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3361265765U))))) != (max((((/* implicit */int) (_Bool)1)), (var_3)))))))));
    var_21 = ((/* implicit */unsigned int) (_Bool)1);
    var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (max((var_17), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 933701509U)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_5 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_24 = (~(min((-5815742442303831329LL), (((/* implicit */long long int) 3361265765U)))));
                            var_25 = ((/* implicit */short) (!(((((/* implicit */_Bool) -5563449191295143189LL)) || (((/* implicit */_Bool) (-(arr_2 [i_3] [i_1 - 1]))))))));
                            var_26 = ((/* implicit */unsigned short) 5985695670775687783ULL);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)120);
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                            {
                                var_27 ^= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) 933701509U)))), ((!(((/* implicit */_Bool) 3361265765U))))));
                                arr_16 [i_0] [i_1] [i_1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */long long int) arr_2 [i_2 + 1] [i_2 + 1])), ((+(arr_6 [i_2] [(unsigned char)11] [i_4]))))));
                            }
                            for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                            {
                                var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(933701530U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_19))))) : (((((/* implicit */_Bool) (unsigned short)29446)) ? (((/* implicit */long long int) 467621399)) : (3633948662641000245LL))))))));
                                arr_20 [i_5] [10LL] [i_2 + 1] [i_5] = ((/* implicit */long long int) ((((7658281335337508334LL) <= (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) 1150658481)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+((((_Bool)1) ? (3361265770U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5558)))))))));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) == (var_13)));
                var_30 ^= ((/* implicit */long long int) (unsigned char)73);
                /* LoopNest 3 */
                for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_7] [i_6] = ((/* implicit */unsigned short) var_13);
                                arr_32 [i_0] [i_1] [i_6] [i_6] [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((-3633948662641000246LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) * (933701530U))) != (((/* implicit */unsigned int) -1150658481))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
