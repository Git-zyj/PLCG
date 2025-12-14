/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73838
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((-2528978213624904411LL), (((/* implicit */long long int) (_Bool)1))));
                            var_10 = (-(((((/* implicit */_Bool) var_4)) ? (6109287582573593602LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)44390))))), (3988892282U)));
                            var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (2108008028913735196ULL) : (((/* implicit */unsigned long long int) var_8))))))));
                            arr_19 [i_0] [(unsigned short)20] [i_4] [i_4] [i_1] [i_1] |= ((/* implicit */_Bool) (~(((int) (-(((/* implicit */int) var_0)))))));
                            arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) max((var_9), (var_7)))), (((int) var_2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            arr_26 [i_6] &= ((/* implicit */int) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)103)) ? (-1981496697063352287LL) : (((/* implicit */long long int) 4197759947U))))));
                            arr_27 [(unsigned char)7] [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27297))) : (17748503367538559500ULL))));
                            var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)101))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_1))))))) : ((+(max((((/* implicit */unsigned long long int) var_1)), (3236576535360215622ULL)))))));
                            var_13 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 21; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((int) min(((~(3236576535360215617ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)230))))))));
                            arr_34 [i_0] [i_1] [i_0] [i_0] = (~(min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)192)))), (var_3))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 15210167538349335993ULL))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (unsigned char)111)))))) == (((long long int) 15210167538349335993ULL))))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned char) (signed char)-45)), (max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)101))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)109)))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (_Bool)1))))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) 1500092010U)), ((~(-1981496697063352295LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        for (signed char i_14 = 2; i_14 < 7; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_4))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) max((((short) (unsigned char)213)), (((/* implicit */short) var_5))))) == (((/* implicit */int) (unsigned char)127)))))));
                            arr_53 [i_13] [i_13] [i_14 + 2] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (short)0)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            {
                                arr_61 [i_17] [i_18] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)144)))));
                                var_22 = ((/* implicit */int) ((((long long int) 18446744073709551591ULL)) & (((/* implicit */long long int) ((int) var_8)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
