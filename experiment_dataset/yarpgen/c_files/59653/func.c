/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59653
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), ((~(((((/* implicit */_Bool) (short)-7041)) ? (((/* implicit */unsigned long long int) 2544516458U)) : (17777017449265052802ULL)))))));
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)14790))) * (1382014170U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_6 [0] [i_2] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-5837)), ((unsigned short)60359)))), (min(((-(2912953122U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_3))))))));
                    var_18 = ((/* implicit */unsigned long long int) (unsigned char)62);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (~(2912953124U)))), (var_4))) << (((max((((/* implicit */unsigned int) max((var_11), (1073741823)))), (((1382014189U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) - (1073741778U)))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & ((+(((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_21 = ((max((((/* implicit */unsigned long long int) var_2)), (12430770068544155840ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13942)) || (((/* implicit */_Bool) var_4))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                            {
                                arr_20 [i_3 - 1] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) (-(min((15078021277504980491ULL), (((/* implicit */unsigned long long int) (unsigned char)32))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) | ((~(6015974005165395775ULL)))));
                            }
                            for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned char) (-(1192325524U)));
                                var_24 = ((/* implicit */unsigned long long int) min((max((min((((/* implicit */int) var_0)), (var_3))), (((((/* implicit */int) (unsigned short)32768)) * (((/* implicit */int) (short)-13348)))))), ((~(((/* implicit */int) (short)9554))))));
                            }
                            var_25 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)21060)) | (((/* implicit */int) (short)0)))))));
                            var_26 = ((/* implicit */short) min((min(((+(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1382014174U)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) (-((+(215525690U)))));
                arr_24 [i_4] [i_4] = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) (short)23264)) ? (((/* implicit */int) (unsigned short)60649)) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
}
