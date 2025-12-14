/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86619
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((((/* implicit */int) var_6)) <= (((/* implicit */int) (signed char)-72)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [(signed char)0] [(signed char)0] [(signed char)13] [(signed char)13] [i_0] [i_0 - 4] [(signed char)4] = ((/* implicit */signed char) ((var_7) ? (((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3 + 3] [i_4]))))) : (((/* implicit */int) min(((signed char)-72), (var_0)))))) : (((/* implicit */int) arr_6 [i_2 - 1] [i_0] [i_2 + 1] [i_2 + 2]))));
                                arr_14 [i_0] [i_1] [i_1] [(signed char)3] [i_1] [i_1] = var_8;
                                var_15 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-11))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)72)) * (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (152))))) : (((/* implicit */int) min(((signed char)44), (arr_11 [i_0] [i_0] [i_1] [i_0] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))));
    var_18 = ((/* implicit */unsigned char) (signed char)127);
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                                var_19 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_5 [i_5] [i_7] [i_5])))) >= (((/* implicit */int) (signed char)-20))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-80)), ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_21 = (unsigned char)3;
                            arr_35 [i_5] [i_6] [(signed char)6] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_5] [i_6] [i_10] [i_11]), (arr_6 [i_5] [i_6] [i_6] [i_11])))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) (_Bool)1))))));
                            arr_36 [i_6] [(_Bool)1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_11), (var_11))), (((unsigned char) (signed char)(-127 - 1)))))) ? ((+(((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) (signed char)-115)) ? (((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) var_9)))))));
                        }
                    } 
                } 
                arr_37 [(unsigned char)9] = ((unsigned char) (((((((_Bool)1) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5])))) + (2147483647))) >> ((((+(((/* implicit */int) (unsigned char)69)))) - (52)))));
                var_22 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6] [i_6])) >= (((/* implicit */int) arr_6 [i_5] [i_6] [i_5] [i_5])))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) var_12))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (signed char)115)))));
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_5), (var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
