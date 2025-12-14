/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84664
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) var_5)));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        var_18 = ((/* implicit */unsigned long long int) ((((int) (+(((/* implicit */int) var_13))))) <= (((/* implicit */int) ((unsigned short) -3901272387325208618LL)))));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min((min((12ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)153))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
        var_20 = ((((/* implicit */_Bool) (-(min((-4485117692682073375LL), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_2]))))) : (((/* implicit */int) (unsigned char)153)));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (short)-7370)) : (((/* implicit */int) (_Bool)1))))));
                    var_21 *= ((/* implicit */int) ((signed char) ((unsigned short) var_14)));
                    arr_15 [i_2] [i_2] [i_2] = (~((~(((/* implicit */int) (signed char)63)))));
                }
            } 
        } 
        var_22 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [0LL] [i_2] [0LL] [i_2])) <= (var_1))) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (var_9))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)102)) + (((/* implicit */int) (unsigned short)57180))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    arr_26 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned short) (unsigned short)4953));
                    var_24 = ((/* implicit */short) ((signed char) ((short) (_Bool)1)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) var_12);
                                var_26 = ((/* implicit */_Bool) (+(-2218676406198699078LL)));
                                arr_31 [i_8] [i_5] [(_Bool)1] [i_8] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) 14252199670168852391ULL)))));
                                var_27 = ((/* implicit */unsigned short) ((long long int) (unsigned char)153));
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)141)))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_12))));
}
