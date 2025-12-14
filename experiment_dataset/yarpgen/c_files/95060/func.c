/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95060
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (~(arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47679)) ? (((long long int) arr_6 [i_0] [i_0] [i_1] [i_0])) : ((+(5102980586844639667LL)))));
                        var_15 = ((/* implicit */_Bool) (~(arr_7 [i_3] [i_3] [i_3] [i_3])));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((arr_8 [9] [i_0 + 1]) == (arr_0 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_5] = ((/* implicit */long long int) var_6);
                        var_17 = ((/* implicit */unsigned short) (~(12010215793762600865ULL)));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) (~(-6377115515510648746LL)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_10))) == (((((/* implicit */_Bool) (signed char)26)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 + 1] [22]))))))));
        var_20 = ((/* implicit */unsigned short) arr_20 [i_7 - 1]);
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_21 *= ((/* implicit */unsigned long long int) ((long long int) var_5));
            arr_25 [i_7] [i_8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_7 - 1] [i_7])) > (((/* implicit */int) arr_21 [i_7 - 1] [i_8]))))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)4))))))));
            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_22 [i_7 + 1])))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_23 = ((/* implicit */short) (((~(((/* implicit */int) arr_22 [i_7 - 1])))) == (((/* implicit */int) arr_22 [i_7 - 1]))));
                var_24 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) | (arr_20 [i_7]))));
            }
            arr_29 [i_7 + 1] [i_7] [i_7 + 1] = arr_23 [i_7] [i_8];
        }
        var_25 += ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_0)))) > (((/* implicit */int) ((unsigned char) var_4)))));
        /* LoopNest 2 */
        for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_28 [i_7] [i_10] [i_7] [i_7])), ((+(var_10)))))));
                    var_27 = (~(((/* implicit */int) var_5)));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)16700)) != (((/* implicit */int) (signed char)22)))))) | (max((((/* implicit */unsigned int) var_3)), (var_10))))) : (((/* implicit */unsigned int) (-(((int) 9223372036854775807LL)))))));
}
