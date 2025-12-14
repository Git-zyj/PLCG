/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79040
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
    var_16 = ((/* implicit */int) ((unsigned int) var_2));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) (~(var_2)));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_3 [i_0] [i_1] [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_9 [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [12] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (short)17494)) ? (((/* implicit */int) (unsigned short)1020)) : (((/* implicit */int) (short)-17503))))));
                arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [0] [8U] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) : (var_2)))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_2)) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                arr_11 [(_Bool)1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((-698173711), (((/* implicit */int) (short)31643))))) ? (((/* implicit */unsigned int) (~(arr_1 [i_2])))) : (arr_8 [i_2] [i_2] [i_3])));
                arr_12 [i_3] = ((/* implicit */short) var_2);
                arr_13 [i_0] [i_0] [i_0] [i_3] = (+(((/* implicit */int) ((short) (+(var_12))))));
            }
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    arr_18 [i_0] [(short)3] [i_4] = ((((/* implicit */_Bool) -1466962468)) ? (((/* implicit */int) (short)17494)) : (((/* implicit */int) (signed char)85)));
                    var_19 -= ((/* implicit */short) arr_0 [i_0]);
                }
                for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_0] [i_2] [i_6] [i_6] [i_0] = ((/* implicit */short) (~(min((var_0), ((~(var_2)))))));
                    arr_22 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_15 [i_0] [i_2] [i_0] [i_6]))) ^ (max((((/* implicit */int) arr_15 [i_0] [i_2] [i_4] [11])), (var_0)))));
                }
                var_20 += ((/* implicit */_Bool) (signed char)105);
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_4] [i_7] [i_2] = ((/* implicit */short) arr_0 [i_0]);
                    var_21 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_4] [i_7])) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)17499)) && (((/* implicit */_Bool) 16383))))))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) arr_23 [i_7] [i_2] [i_4])) ? (((((int) 1006632960U)) - (((/* implicit */int) ((short) arr_1 [i_7]))))) : (((/* implicit */int) var_10)));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_1))));
                        var_24 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_14 [(short)3]) : (((/* implicit */int) (short)1693))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_23 [14] [i_7] [i_8])))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)))));
                    }
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_5))));
                }
                var_26 = ((((/* implicit */_Bool) var_15)) ? (((int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((var_13) & (var_15)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_6 [i_0] [i_2] [i_0])))))));
                var_27 = ((/* implicit */unsigned int) ((((int) arr_25 [i_0] [i_2] [i_2] [(signed char)12] [i_4] [i_0])) + (((/* implicit */int) (signed char)108))));
            }
            var_28 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) (signed char)5)) << (((((/* implicit */int) arr_28 [i_0] [7] [i_0] [5] [i_2])) - (25796))))) + (((/* implicit */int) (signed char)-1))))));
            arr_30 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) ((short) arr_1 [i_0]))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_29 -= ((/* implicit */int) arr_31 [i_0]);
            var_30 = ((/* implicit */short) max((var_30), (((short) ((((/* implicit */int) arr_19 [i_0] [10U] [i_0])) | (((/* implicit */int) arr_19 [i_0] [i_9] [i_0])))))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) min((((int) (-(-325554784)))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_9] [i_9])), (arr_28 [i_0] [(short)13] [(short)8] [(short)13] [i_9])))) <= (((((/* implicit */int) var_1)) % (((/* implicit */int) var_7))))))))))));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [13] [i_9])) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-((+(((/* implicit */int) (short)5804))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_10])) / (((/* implicit */int) arr_31 [(signed char)13]))))) ? ((~(arr_8 [i_0] [i_10] [i_10]))) : (((((/* implicit */_Bool) var_1)) ? (arr_33 [(unsigned short)2] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [7U] [i_0] [i_10] [i_10])))))))))));
            var_34 = ((/* implicit */unsigned int) ((short) max((arr_14 [i_0]), (arr_14 [i_10]))));
        }
        arr_35 [i_0] [i_0] = max((((((/* implicit */int) arr_4 [i_0] [i_0])) - (1414940631))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))));
    }
    var_35 = max((((/* implicit */unsigned int) -16385)), (var_3));
    var_36 = ((((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) << (((/* implicit */int) ((var_6) != (max((((/* implicit */unsigned int) var_13)), (var_14)))))));
}
