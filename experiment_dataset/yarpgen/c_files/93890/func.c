/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93890
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned int) var_9);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) (unsigned char)218);
                        var_19 = ((/* implicit */unsigned short) var_11);
                        var_20 = ((/* implicit */long long int) 13071922198926244973ULL);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_3 + 1] [i_3])))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_3 + 2] [i_3])) ? (arr_3 [i_1] [i_3 + 1] [i_3 - 1]) : (arr_3 [(signed char)11] [i_3 + 2] [i_3]))) : ((~(arr_3 [6ULL] [i_3 + 1] [i_3 - 2])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            arr_21 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
            var_22 &= ((/* implicit */int) (~(var_10)));
        }
        var_23 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)41366));
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_15 [i_6]))))))));
        var_25 = ((((((/* implicit */_Bool) arr_0 [i_6])) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-49)) / (((/* implicit */int) (unsigned short)24191))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_13)))) && (((/* implicit */_Bool) var_13))));
    var_27 = ((/* implicit */short) (unsigned short)9785);
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                {
                    var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (((unsigned long long int) var_14))));
                    arr_33 [i_7] [i_8 + 1] [i_8 + 1] [i_7] = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) var_1)), (arr_18 [i_7])))));
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned short) -1314331978392790954LL);
        var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    }
}
