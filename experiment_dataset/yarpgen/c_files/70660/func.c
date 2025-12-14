/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70660
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_4 [i_0] [i_0])))) * (((/* implicit */int) arr_0 [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */int) (-(min((arr_9 [15U] [i_2] [i_4]), (((/* implicit */long long int) var_7))))));
                                arr_16 [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((int) (signed char)-18)))) | (((((/* implicit */int) ((short) (signed char)17))) * (((/* implicit */int) min((arr_7 [(_Bool)1] [i_2] [i_2] [i_2]), (((/* implicit */short) (signed char)89)))))))));
                                var_14 = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_2]);
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (7072797366422283326LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-90)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_10 [i_0] [i_1] [i_5] [i_1]))) != (((/* implicit */unsigned int) min((max((arr_14 [i_5] [(_Bool)1] [i_1] [i_1] [i_0]), (((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)18)))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned int) ((((arr_11 [i_0] [i_1] [i_6 + 1] [(unsigned char)8] [i_7] [i_5]) / (((/* implicit */int) (signed char)75)))) - ((+(((((/* implicit */int) (signed char)-90)) + (((/* implicit */int) arr_1 [i_6]))))))));
                                var_16 -= min(((signed char)-108), ((signed char)-80));
                                var_17 = ((/* implicit */long long int) ((((((/* implicit */int) ((-56827168) <= (((/* implicit */int) (short)5598))))) + (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((short) (unsigned char)91)))));
                            }
                        } 
                    } 
                    var_18 = var_5;
                    var_19 = ((/* implicit */unsigned short) arr_20 [i_0] [(signed char)7] [i_5]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_36 [i_10] [i_10] [15U] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_0) + (906084892)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [11U] [i_1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)17))))) : (((unsigned int) -56827152)))), (((/* implicit */unsigned int) 56827168))));
                                arr_37 [i_10] [i_10] [i_10] [i_8] [i_10] [11LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(-56827169)))) | (max((((/* implicit */unsigned int) (signed char)15)), ((-(arr_18 [i_0] [i_10])))))));
                            }
                        } 
                    } 
                    arr_38 [(signed char)9] [i_8] [i_0] [i_0] = ((((/* implicit */int) ((unsigned char) (+(1217442844U))))) * (max((((/* implicit */int) arr_27 [i_0] [i_0] [i_8] [i_8])), ((-(((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((arr_27 [i_11 - 1] [i_11 - 4] [i_12] [i_12]) ? (((/* implicit */int) ((signed char) var_9))) : (((arr_0 [i_11]) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)20))))))));
                                var_21 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = var_4;
}
