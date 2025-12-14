/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67676
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) & (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) -501790495)) ? (1431976541999884268ULL) : (((/* implicit */unsigned long long int) 501790494))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_4 + 3] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-501790494))))));
                                var_13 = ((/* implicit */long long int) max((var_13), (var_8)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_1] [i_2]), (arr_1 [i_0] [i_2]))))) | ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) (-(min((max((((/* implicit */long long int) (_Bool)0)), (arr_12 [i_5]))), (((long long int) 501790494))))));
                        var_17 = ((/* implicit */int) arr_12 [i_5]);
                        arr_21 [i_8] [i_8] [i_8] [i_5] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) 3341293866397540422ULL)))));
                    }
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) && (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_5] [i_6] [i_6] [i_7] [i_7]) : (((/* implicit */int) var_4))))), (arr_12 [i_6])))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_7] [i_5] [i_5]))))), (arr_13 [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_5]), (((/* implicit */long long int) arr_15 [i_5]))))) ? (var_3) : (((/* implicit */int) arr_18 [i_5] [i_6] [i_7] [i_5]))))) : (15105450207312011194ULL)));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_6]))))), (max((arr_24 [i_5] [i_5]), (((/* implicit */long long int) arr_20 [i_5] [i_6] [i_5] [i_5] [i_5]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) arr_15 [0])))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_13 [i_11]);
                                var_22 -= ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (min((min((((/* implicit */long long int) -501790495)), (arr_12 [i_5]))), (((/* implicit */long long int) var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3341293866397540422ULL)) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_9] [i_6] [i_9] [i_6])) : (((((/* implicit */_Bool) var_11)) ? (501790494) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */int) (short)-18409)), (501790484)))))) : (arr_14 [i_13]))))));
                                var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (+(-501790481)))))))));
                                var_25 = ((/* implicit */int) min((var_25), ((~(((/* implicit */int) max((arr_27 [i_12] [i_13] [i_13] [i_13 + 2] [i_13] [i_12]), (arr_27 [i_12] [i_12] [i_13] [i_13 + 2] [i_12] [i_12]))))))));
                                arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_31 [i_13] [i_12] [i_9] [i_6] [i_5])))) ? (((long long int) (+(-501790495)))) : (((/* implicit */long long int) arr_30 [i_5] [i_5] [i_9] [i_6] [i_6] [i_5] [i_5]))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_14] [i_5] [i_5]))));
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (-501790494)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_44 [i_16] [i_15] [i_15] [i_15] [i_6] [i_5])) >= (((/* implicit */int) arr_41 [i_5] [i_6] [i_15])))))) : (arr_42 [i_15] [i_5] [i_5])))), ((-(max((arr_14 [i_15]), (((/* implicit */unsigned long long int) arr_15 [i_15])))))))))));
                            }
                        } 
                    } 
                    arr_45 [i_5] [i_6] [i_5] = ((/* implicit */short) arr_44 [i_6] [i_6] [i_5] [i_6] [i_6] [i_6]);
                }
                for (int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) arr_24 [i_6] [i_6]))))))), (var_1)));
                    var_29 = ((/* implicit */short) arr_19 [i_5] [i_5] [i_5] [i_5]);
                }
                var_30 -= ((/* implicit */unsigned long long int) 500432491);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_18 = 1; i_18 < 22; i_18 += 2) 
    {
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            {
                var_31 |= ((/* implicit */unsigned long long int) ((_Bool) arr_49 [i_18]));
                var_32 = ((/* implicit */long long int) ((signed char) ((_Bool) ((arr_50 [i_18]) ? (((/* implicit */int) arr_50 [i_18])) : (-501790495)))));
                var_33 -= ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)17670)));
            }
        } 
    } 
}
