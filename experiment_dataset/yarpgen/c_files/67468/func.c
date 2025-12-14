/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67468
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) max(((short)-17736), ((short)31319)))) >= (((((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0]))))) * (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31305))) : (18909383U)))))) || ((!(((((/* implicit */_Bool) (short)-31319)) || (((/* implicit */_Bool) var_7))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_2 [i_3])))), (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_11 [i_1]))))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_9))));
                                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)187))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)94);
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((((((/* implicit */int) (short)31319)) == (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned int) ((signed char) arr_12 [i_0] [i_0] [i_0] [(short)1]))), (var_4))) : (var_4)));
        arr_16 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) var_0)) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) var_3);
        var_17 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))));
        arr_21 [i_5] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)0));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) (signed char)-2))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_6]))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_19 [i_6]))))) : (max((((/* implicit */unsigned int) var_8)), (arr_19 [i_6])))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (short)31298))));
        arr_25 [i_6] = ((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (arr_23 [i_6])))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) (unsigned char)128))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [i_6]), (arr_20 [i_6]))))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)13]))) : (var_4))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))));
        arr_26 [(_Bool)0] [i_6] |= ((/* implicit */unsigned short) (unsigned char)223);
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */signed char) var_5);
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_7] [i_7])) + (((((/* implicit */int) (signed char)-94)) - (((/* implicit */int) arr_28 [i_7]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 4; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_22 += ((/* implicit */signed char) arr_8 [i_8] [i_10] [i_10] [i_11]);
                            var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) >= ((-(((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_8] [i_9 - 1])) / (((/* implicit */int) arr_34 [i_9 - 1] [i_8])))))));
                var_25 = ((/* implicit */short) (unsigned char)38);
            }
        } 
    } 
    var_26 *= ((/* implicit */unsigned short) var_2);
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) * (((/* implicit */int) max((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))))))));
}
