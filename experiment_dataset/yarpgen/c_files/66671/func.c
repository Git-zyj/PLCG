/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66671
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
    var_16 = ((/* implicit */unsigned short) 18444802465122338616ULL);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+((+(((((/* implicit */int) (signed char)-95)) / (((/* implicit */int) (signed char)-95)))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max(((signed char)-95), ((signed char)-120)));
        var_18 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */int) arr_3 [i_0])) : ((~(((/* implicit */int) (signed char)-90)))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = var_3;
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) var_8)) : (arr_6 [i_1] [i_1 + 1])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_16 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (signed char)104)) : (1739769963)));
                    var_21 = ((/* implicit */unsigned short) var_4);
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */_Bool) 1691022092U);
                                var_23 |= ((/* implicit */unsigned int) -472476969);
                                var_24 = ((/* implicit */short) arr_7 [i_1 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_6 = 4; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((unsigned char) ((int) (unsigned char)7)))) : (((((/* implicit */_Bool) (signed char)94)) ? (-1739769964) : (((/* implicit */int) (unsigned short)44973))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)47281), (((/* implicit */unsigned short) arr_22 [i_6 - 1] [i_7 - 1]))))) / ((-(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                arr_37 [i_7] [(signed char)12] [14U] [9ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (arr_21 [i_6] [i_7] [i_6] [i_6] [i_6]) : (var_8))) : (((/* implicit */int) max((var_15), (((/* implicit */short) arr_19 [i_6] [i_8] [i_9])))))))) ? (((/* implicit */int) min(((unsigned short)54059), (((/* implicit */unsigned short) arr_14 [i_7 - 1] [i_6 + 1] [7] [i_9]))))) : (-497127104));
                                var_27 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_6 - 2])) : (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned short)54069)) : (((/* implicit */int) arr_23 [i_6 + 1]))))));
                                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)44967)) / (((/* implicit */int) (signed char)102)))) & (((((/* implicit */int) arr_29 [i_7 + 1] [(unsigned short)12] [i_7 + 1] [i_7])) | (var_1)))));
                                arr_38 [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) (unsigned short)20568)) : (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) max((var_29), (-727819700)));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) / (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-109)) * (((/* implicit */int) (signed char)85))))) : (min((56061933U), (arr_6 [i_6 - 4] [i_6])))));
    }
    var_31 = ((/* implicit */unsigned short) var_15);
}
