/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67637
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
    var_18 = min((min((((/* implicit */int) var_5)), (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_16)))))), (((var_17) + (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned short)44011)) : (((/* implicit */int) (unsigned char)167)))))));
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (-2432210))) : (((var_3) & (var_17)))));
    var_20 ^= var_16;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_21 = min((((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)44011))))) % ((+(var_2))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)48)) : (var_9))));
                                var_22 = ((/* implicit */int) ((unsigned short) ((int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_3])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_13) + (2147483647))) << (((((/* implicit */int) var_12)) - (50240))))))));
                    var_24 = var_6;
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned short)43821))));
                }
                for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (-628574405)))) ? (((/* implicit */int) ((unsigned short) -2432231))) : (((/* implicit */int) var_0))));
                        var_27 -= ((/* implicit */unsigned char) -1691332030);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28368)) ? (-2432228) : (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_6 + 2])) : (((((/* implicit */_Bool) -1714368885)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned char)229))))));
                            arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15416)) + (1691332047)));
                        }
                    }
                    var_29 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)26378)) / (((/* implicit */int) (unsigned char)48)))));
                    var_30 = ((/* implicit */unsigned char) var_10);
                }
                for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_31 = var_1;
                                var_32 = ((var_6) ^ ((~(((/* implicit */int) ((unsigned char) var_1))))));
                                var_33 -= ((/* implicit */unsigned char) max((((unsigned short) arr_30 [8] [i_9 + 2] [i_10] [i_10])), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10))))))));
                                arr_37 [i_9] [i_0] [i_11] [i_0] [i_10] [i_9 + 2] [i_0] = max((((/* implicit */int) (unsigned char)189)), (((int) -660924767)));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned short)52760)) : (((/* implicit */int) (unsigned short)65533)))) : (((((/* implicit */_Bool) min((-2045948658), (-336068054)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)207))))));
                    var_35 = ((/* implicit */unsigned short) ((max((-1258868258), (336068073))) | (var_9)));
                    var_36 = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_9] [i_0] [i_0] [i_1]);
                }
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -336068054)) ? (((/* implicit */int) (unsigned short)35875)) : (-498042728)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])) : (var_6))) : (((/* implicit */int) max((var_7), (arr_9 [i_1] [i_1] [i_1] [i_0]))))));
                var_38 = ((/* implicit */unsigned char) var_3);
                var_39 = ((/* implicit */int) var_1);
            }
        } 
    } 
}
