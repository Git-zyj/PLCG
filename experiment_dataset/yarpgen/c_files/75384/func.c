/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75384
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
    var_18 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_17)) : (((((/* implicit */_Bool) (-(1252916339)))) ? (var_5) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (-3690303506229749919LL))))));
    var_19 = ((/* implicit */_Bool) var_16);
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) & (var_16))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -3690303506229749900LL))));
            arr_7 [i_0] [(unsigned short)1] = ((/* implicit */signed char) var_11);
            arr_8 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(-1045914268)))), (min((((/* implicit */long long int) (+(((/* implicit */int) (short)6926))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_16)))))));
        }
        /* vectorizable */
        for (signed char i_2 = 4; i_2 < 19; i_2 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */long long int) var_15);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) var_8);
                        arr_18 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        arr_24 [(short)2] [i_0] [i_0] [(short)2] = ((/* implicit */unsigned short) var_1);
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_17))));
                        var_24 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [6U])) ? (((/* implicit */int) (unsigned char)62)) : (-1252916344)))));
                    }
                } 
            } 
            arr_25 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_0 - 2] [i_0 - 2] [i_0] [i_2]))))));
        }
        arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)6284))));
    }
    for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) (-(var_4)));
                    var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))), (var_5)));
                }
            } 
        } 
        var_27 -= ((/* implicit */unsigned int) (~((+((-(((/* implicit */int) arr_31 [i_7] [i_7 + 1]))))))));
    }
}
