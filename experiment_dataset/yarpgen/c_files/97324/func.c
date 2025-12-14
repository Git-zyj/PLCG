/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97324
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(1926776400)));
        var_17 = ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned char)0)))), (min((((((/* implicit */int) var_13)) | (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)122)) <= (((/* implicit */int) (unsigned char)122)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)23466))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)134)))) == (((((/* implicit */int) (unsigned char)147)) + (-2147483636)))));
                        var_19 += ((/* implicit */signed char) (-(((/* implicit */int) min(((signed char)-110), ((signed char)-126))))));
                        var_20 *= ((/* implicit */short) var_9);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
        var_22 = ((/* implicit */signed char) ((min((((((/* implicit */int) (signed char)-124)) * (((/* implicit */int) (signed char)118)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)113)), (var_0)))))) >= ((-(((/* implicit */int) (signed char)-127))))));
    }
    var_23 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))))));
    var_24 = ((/* implicit */unsigned char) (signed char)-40);
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((var_7), (((/* implicit */short) var_14)))))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) (signed char)-1))), (min((((/* implicit */unsigned char) (signed char)110)), (var_16)))));
                        var_27 = ((/* implicit */short) (unsigned char)25);
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-110)), ((unsigned char)242))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) ((min((((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)127))))), (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned char)242)))))) + (((/* implicit */int) (unsigned char)3))));
    }
}
