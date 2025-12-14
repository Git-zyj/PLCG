/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99573
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
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_19 -= ((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) arr_0 [i_0 + 1]))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned char) var_0))))) : (((arr_1 [i_0 + 3]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (signed char)95))))));
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)101))));
        var_21 = ((/* implicit */short) (-((+(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32750)))) <= (((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (((/* implicit */int) arr_2 [i_1]))))))), ((-((+(((/* implicit */int) var_2))))))));
        var_23 += ((/* implicit */unsigned short) ((short) arr_2 [i_1]));
        var_24 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)13801)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-32744), (arr_3 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_2 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_7 [i_1] [(signed char)6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned char)192))) * (((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-105))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((((((/* implicit */int) var_0)) >> (((((/* implicit */int) (unsigned short)65521)) - (65514))))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_4 + 1] [i_4 + 1])), (min(((~(((/* implicit */int) arr_14 [(_Bool)1] [(unsigned char)11] [(unsigned short)11] [i_4] [i_4 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [(signed char)4] [(signed char)4]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_20 [i_1] &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_6 - 1])) : (((/* implicit */int) (unsigned short)10))))))))));
                            arr_21 [i_6] [(_Bool)1] [i_3] [i_2] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)193)) >> (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((short) var_1)))));
                            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_7] [i_3] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_4))))) : ((-(((/* implicit */int) var_2)))))) < ((((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_7])))) | (((/* implicit */int) (_Bool)1))))));
                            arr_22 [i_7] [i_6] [i_3] [i_3] [i_3] [i_6] [i_1] = ((/* implicit */short) (signed char)101);
                            arr_23 [i_1] [i_1] [i_6] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                arr_24 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [(signed char)22])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)152)), (var_1)))) : (((arr_6 [i_1] [i_1]) ? (((/* implicit */int) (short)-1307)) : (((/* implicit */int) (signed char)116))))))) ? (min((((/* implicit */int) max((var_12), (var_16)))), (((arr_15 [i_1] [i_2] [i_1] [(unsigned char)18]) ? (((/* implicit */int) arr_19 [i_2] [i_3])) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) min(((unsigned short)51006), (((/* implicit */unsigned short) var_10))))) ? ((~(((/* implicit */int) (short)32759)))) : (((/* implicit */int) var_3))))));
                arr_25 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-106)) * (((/* implicit */int) (unsigned char)110))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)79)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */int) (short)-3228)) : (((/* implicit */int) (signed char)-120))))));
                var_30 = ((/* implicit */unsigned char) arr_4 [i_1] [(unsigned short)13]);
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32761)) && (((/* implicit */_Bool) arr_30 [(_Bool)1] [(_Bool)1])))))));
        var_32 = ((/* implicit */unsigned short) var_10);
        var_33 = ((/* implicit */short) var_5);
    }
}
