/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55818
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
    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (unsigned char)175)))))))));
    var_20 = (short)16383;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                arr_5 [3] [i_1] [i_0] = ((/* implicit */int) (!((_Bool)1)));
                arr_6 [i_1] [i_1 + 3] = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) > (var_12)))))) : ((-(((((/* implicit */int) var_1)) & (((/* implicit */int) var_16))))))));
            arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
        }
        arr_13 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
        var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 349023823))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)93))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))));
        arr_14 [i_2] = ((/* implicit */int) (((+(((/* implicit */int) var_2)))) >= ((-((~(((/* implicit */int) var_1))))))));
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-((+(((/* implicit */int) max(((short)-22197), (((/* implicit */short) var_1))))))))))));
        var_25 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (var_12))) > ((+(((var_14) ? (((/* implicit */int) var_2)) : (var_7)))))));
        var_26 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) var_1))))));
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_19 [(unsigned short)4] &= ((/* implicit */_Bool) (~((-(((/* implicit */int) min(((short)-12130), (((/* implicit */short) var_11)))))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 4; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (~(var_12)));
                        var_28 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_14))))));
                    }
                } 
            } 
        } 
    }
}
