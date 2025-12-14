/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61387
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
    var_20 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_9))));
    var_21 = var_18;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((((/* implicit */_Bool) 1820529784U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (arr_0 [i_0]));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) != (-2286103491401028119LL))))) >= (var_4)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))))) ? (((/* implicit */long long int) 1820529774U)) : (((((_Bool) var_16)) ? (max((((/* implicit */long long int) var_10)), (var_18))) : (max((((/* implicit */long long int) arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2])), (arr_0 [i_0 - 1])))))));
            var_25 -= ((/* implicit */_Bool) var_14);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((((unsigned short) max((((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_1] [i_2] [i_3])), (1304320965129265118ULL)))), (((/* implicit */unsigned short) max((arr_7 [i_0] [i_0 + 1] [i_2]), (arr_7 [i_0] [i_0 - 1] [i_2]))))));
                        var_27 -= ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_0)))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((1680027751U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_3])))))), (max((var_11), (((/* implicit */unsigned short) (_Bool)1))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_12))) & (arr_8 [i_0] [i_2] [i_0]))) / ((-(2286103491401028107LL))))) : (((/* implicit */long long int) (+(var_1))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (var_3)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 16; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) max((var_1), (var_5))))) ? ((-(((unsigned int) var_6)))) : (((/* implicit */unsigned int) (~(-678097818))))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_3 [i_0 + 1]))));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_2))));
                    }
                } 
            } 
            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_0 + 2] [i_0 - 1]), (arr_11 [i_0 + 2] [i_0 + 2])))) ? (max((arr_11 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_16)))) : (((((/* implicit */unsigned long long int) var_1)) & (arr_11 [i_0 + 1] [i_0 - 1])))));
        }
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_8] [(signed char)12] [i_8]))) : (arr_15 [i_7] [i_6 + 2] [(_Bool)0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((int) arr_3 [i_8])) : (((/* implicit */int) arr_19 [i_7] [i_6] [i_0 + 2]))))))))));
                        var_35 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) 4U)))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_7 + 2] [i_9])), (((((/* implicit */_Bool) arr_18 [i_0] [i_6 + 1])) ? (arr_21 [16U] [i_9] [i_7] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9187)))))))));
                        var_37 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_13 [i_9] [i_7] [i_6 + 1] [i_6] [i_0 - 1]), (-3127246576042894914LL)))) ? ((-(-795679272))) : (((/* implicit */int) ((unsigned short) 1304320965129265106ULL))))), ((-(((/* implicit */int) var_6))))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0 + 1]) : (((/* implicit */long long int) (-((-(251686881))))))));
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(arr_29 [20U] [i_10]))), ((+(arr_29 [18] [18])))))))))));
        var_40 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */unsigned long long int) ((arr_29 [i_10] [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10])))))) : (max((((/* implicit */unsigned long long int) arr_27 [i_10] [18LL])), (var_17)))))));
        var_41 += ((/* implicit */unsigned long long int) var_3);
    }
}
