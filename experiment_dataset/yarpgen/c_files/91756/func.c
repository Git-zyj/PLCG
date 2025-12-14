/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91756
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
                    var_20 = ((long long int) (~(((/* implicit */int) (unsigned char)0))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((max((var_14), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))))));
                                var_22 = ((/* implicit */unsigned int) var_2);
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_24 [i_6] [i_8] [i_6] [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_18)), (var_8)))))), (var_10)));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (short)32767))))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((unsigned int) min((((/* implicit */long long int) var_8)), (var_10)))))))));
                        }
                    } 
                } 
                var_27 = (~((~(var_14))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((/* implicit */int) var_18)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        for (long long int i_10 = 4; i_10 < 9; i_10 += 3) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            {
                                var_29 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_17), (var_9)))))))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_11))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            {
                                var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_16)) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12354323347787355628ULL))))) : ((-(((/* implicit */int) var_12))))));
                                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) (+(var_3)))) : (min((((long long int) var_11)), (((/* implicit */long long int) ((unsigned int) var_16))))))))));
                            }
                        } 
                    } 
                    var_34 = min((((/* implicit */unsigned long long int) (+(var_4)))), (((unsigned long long int) (+(var_5)))));
                    var_35 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_17)))))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) var_1);
}
