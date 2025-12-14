/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96427
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
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) ((min((((/* implicit */long long int) 1832725048)), (var_3))) == ((((_Bool)1) ? (2548148312783836477LL) : (2548148312783836477LL))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)170)) : (601612866)))));
                arr_8 [i_0] [i_1 - 2] [i_0] = (-(((/* implicit */int) (signed char)-118)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    var_14 = ((/* implicit */int) var_6);
                    arr_14 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) arr_5 [8U]);
                    arr_15 [i_0] = ((/* implicit */long long int) ((_Bool) (~((+(1675038428))))));
                }
                var_15 -= ((/* implicit */signed char) arr_7 [i_1] [i_1] [i_1]);
                arr_16 [i_0] [i_3] = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((((/* implicit */int) var_11)), (617024196))) : (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)170)));
                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0]))));
            }
            var_16 = ((/* implicit */int) min((((/* implicit */short) (unsigned char)165)), ((short)-21932)));
            var_17 = ((/* implicit */unsigned int) arr_4 [i_0] [6]);
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                var_18 = ((/* implicit */int) (short)6253);
                arr_22 [i_0] [i_5 + 1] [i_6] = ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) var_7)))) ? (((/* implicit */int) arr_21 [i_0])) : (var_5));
                arr_23 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (short)-6254)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [i_5 + 1] [i_5]))))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_5 + 1] [i_6]))));
            }
            /* LoopNest 3 */
            for (short i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_28 [i_0] [i_5 + 1] [i_9] [i_8]))));
                            arr_33 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            arr_37 [i_0] = ((/* implicit */unsigned int) ((((arr_18 [i_0]) & (((/* implicit */int) (short)6251)))) ^ (min((arr_18 [i_0]), (((/* implicit */int) arr_21 [i_0]))))));
            var_20 = ((/* implicit */unsigned long long int) var_2);
            var_21 = ((/* implicit */unsigned char) arr_30 [i_0] [i_10] [16U]);
            arr_38 [i_0] = ((/* implicit */signed char) var_8);
            var_22 = ((/* implicit */_Bool) var_10);
        }
        var_23 = min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */int) (signed char)(-127 - 1))))) < (((/* implicit */int) (!(((/* implicit */_Bool) 2548148312783836497LL)))))))));
        var_24 = ((/* implicit */long long int) min((var_24), ((-(var_3)))));
    }
    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(819087271))))));
        var_26 = ((int) ((((/* implicit */_Bool) arr_18 [4])) && (((/* implicit */_Bool) arr_12 [i_11] [(_Bool)1] [i_11] [i_11]))));
        var_27 = ((/* implicit */unsigned long long int) min((((int) min((11146676224315377595ULL), (((/* implicit */unsigned long long int) arr_26 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))), (var_10)));
        var_28 = min(((+(82965859))), (var_2));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((int) -8573493675887960677LL));
        var_30 = ((/* implicit */int) min((min((((/* implicit */unsigned int) var_7)), (((unsigned int) (short)-17763)))), (((/* implicit */unsigned int) var_4))));
        var_31 = arr_42 [(unsigned char)19] [(signed char)12];
    }
    for (int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_32 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1077383963)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) < (14260914684465324886ULL)))) : ((-(((/* implicit */int) (short)-13274))))))), (1264114250U)));
        /* LoopNest 2 */
        for (short i_14 = 4; i_14 < 23; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                {
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) min((min(((+(arr_51 [i_14] [i_14] [i_15] [i_14]))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */short) arr_46 [i_15] [i_14]))))))), (min((2000084735U), (((/* implicit */unsigned int) -1511693257)))))))));
                    arr_52 [i_13] = ((/* implicit */unsigned char) 4185829389244226719ULL);
                }
            } 
        } 
    }
}
