/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69748
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_10 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_3)))))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5382))))) ? ((~(arr_1 [i_0] [i_0]))) : ((~(((/* implicit */int) var_9))))))) ? ((((~(((/* implicit */int) (short)-10567)))) >> (((((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-32196)))) + (32224))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)7367))))) ? (max((((/* implicit */int) (short)-32196)), (-723540265))) : ((~(((/* implicit */int) (short)-32210))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                            var_13 -= ((/* implicit */long long int) (short)32171);
                        }
                        arr_14 [i_3] [i_3] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */int) (unsigned short)56817)) : (((/* implicit */int) var_6))));
                        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                        var_15 -= ((/* implicit */unsigned short) ((unsigned int) var_4));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (short)29014)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_8 [i_0])))));
            var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)-25489)) ? (-342669653) : (1081906518))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)28)))) + (19390)))));
            var_18 ^= ((/* implicit */short) ((unsigned short) arr_1 [i_1 - 1] [i_1 - 3]));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((unsigned int) var_2))))) ? ((+((+(arr_8 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_16 [i_5] [i_0] [i_0]), (((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23638)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-32196))))) : (min((-5694811102709785538LL), (((/* implicit */long long int) var_2))))));
            var_19 = ((/* implicit */short) (((((-(((/* implicit */int) (short)30849)))) + (2147483647))) << (((max((arr_8 [i_0]), (((/* implicit */unsigned int) (short)-29010)))) - (4294938286U)))));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 8; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) min((3743639629118600155LL), (((/* implicit */long long int) (unsigned short)12998))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)29021))))))) != ((+(((/* implicit */int) (_Bool)1))))));
                        var_21 = (i_6 % 2 == 0) ? (((/* implicit */long long int) min((((((/* implicit */int) (short)28997)) << (((((/* implicit */int) arr_20 [i_6] [i_6 + 2] [i_6 + 4] [i_6])) - (51))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */long long int) min((((((/* implicit */int) (short)28997)) << (((((((/* implicit */int) arr_20 [i_6] [i_6 + 2] [i_6 + 4] [i_6])) - (51))) - (95))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                        arr_25 [i_6] [i_6] [i_6] = (signed char)82;
                        var_22 -= ((/* implicit */short) (~((~(((/* implicit */int) max((var_9), (var_4))))))));
                        arr_26 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -179588629)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) var_3))))), (arr_23 [i_6] [i_6] [i_6 + 4] [i_6 + 4] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
        }
        arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))), (min((((/* implicit */short) var_1)), ((short)-25489)))))) ? (((((/* implicit */_Bool) ((3252780446805300353LL) << (((((-469090464) + (469090513))) - (49)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((unsigned short)52537), ((unsigned short)12998)))))) : (((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((short)-28993))))));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (var_5)));
    var_24 = ((/* implicit */long long int) var_8);
    var_25 = ((/* implicit */signed char) (+((~(min((var_7), (((/* implicit */int) var_3))))))));
}
