/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90121
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)0))))))) : (min((((/* implicit */long long int) (+(var_2)))), ((+(arr_3 [i_0] [i_0] [i_0])))))));
                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)255)) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2]))))), (((/* implicit */long long int) -1187521947))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 4) 
    {
        var_21 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 2] [i_2 + 2])) ? (var_1) : (((/* implicit */int) arr_6 [i_2]))))));
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-266)))) >> (((/* implicit */int) ((arr_1 [i_2]) > (arr_4 [i_2 - 2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (((((/* implicit */_Bool) ((unsigned int) var_12))) ? (min((arr_3 [i_2] [i_2 - 1] [i_2 - 3]), (((/* implicit */long long int) (short)22886)))) : (max((var_11), (((/* implicit */long long int) var_2))))))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1909490032)))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 + 4]))))) : (((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2 + 2]))))));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_3])) : (var_8))))));
        arr_10 [i_3] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) arr_9 [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6))))) << ((((-((+(((/* implicit */int) (short)276)))))) + (319)))));
        var_24 &= 2693887376U;
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_12 [i_4] [i_4])))) ? ((+(arr_12 [i_4] [i_4]))) : (min((((/* implicit */int) (short)-1)), (arr_12 [i_4] [i_4])))));
        var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (arr_12 [i_4] [i_4]) : (((/* implicit */int) arr_13 [i_4] [i_4])))), (((/* implicit */int) (((-(arr_12 [i_4] [i_4]))) > ((+(arr_12 [i_4] [i_4]))))))));
        arr_14 [i_4] = ((/* implicit */_Bool) min((((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)2833)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_20 [i_6] |= ((/* implicit */unsigned int) arr_15 [i_6] [i_6]);
            var_27 = ((/* implicit */short) (_Bool)1);
            var_28 &= ((/* implicit */_Bool) ((unsigned long long int) (+(arr_17 [i_5]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) (short)-277)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5])) | (var_1)))))))))));
            var_30 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_7])) | (((/* implicit */int) arr_16 [i_5]))))) ? (max((var_5), (var_5))) : (((/* implicit */int) (_Bool)1))));
            var_31 -= min((((/* implicit */unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (short)302)) ? (arr_17 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_5]))))))));
        }
        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_32 = ((unsigned int) var_16);
            var_33 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_5]))))) > (((((/* implicit */_Bool) (short)258)) ? (arr_17 [i_8]) : (((/* implicit */unsigned int) var_8))))));
            arr_27 [i_5] = ((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_8]);
        }
        for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_30 [i_9] [i_9] [i_9] = var_11;
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                arr_34 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_5] [i_5])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5])))));
                arr_35 [i_5] = ((((/* implicit */int) arr_24 [i_10] [i_10] [i_10])) - (((/* implicit */int) (short)32093)));
            }
            arr_36 [i_5] [i_5] = ((/* implicit */int) ((min((arr_28 [i_9] [i_5] [i_5]), (arr_28 [i_5] [i_9] [i_9]))) > (((((/* implicit */_Bool) 4294967284U)) ? (arr_28 [i_5] [i_9] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))));
        }
        arr_37 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5] [i_5])) >> (((((/* implicit */int) var_3)) + (383)))))) ? (((/* implicit */int) min((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))) : ((~(((/* implicit */int) var_10))))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_23 [i_5] [i_11] [i_5])) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) arr_33 [i_5] [i_11] [i_11])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_40 [i_5] [i_5]), (((/* implicit */short) var_18))))))))));
            arr_41 [i_5] [i_11] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_0))) && (((/* implicit */_Bool) arr_16 [i_5]))));
        }
        var_35 = ((/* implicit */unsigned int) max((((/* implicit */signed char) arr_18 [i_5] [i_5])), (((signed char) arr_39 [i_5]))));
    }
    var_36 = ((/* implicit */short) (unsigned short)60045);
}
