/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69431
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
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) var_11)))))) & (((/* implicit */int) (signed char)75))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_4 [(unsigned char)10] &= ((/* implicit */long long int) ((int) ((26671780) - (-26671793))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((-26671780), (26671780)))))) ? (max((((((/* implicit */_Bool) -26671780)) ? (26671784) : (-26671784))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))) : (min((((((-26671781) + (2147483647))) >> (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (26671780)))))));
                    var_20 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 26671780)))))))));
                    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2])) ? ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2])))))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [i_0] [i_1 - 1])))) + (((arr_0 [i_0] [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (((/* implicit */int) arr_0 [i_0] [i_1 - 1]))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = 26671780;
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        arr_21 [i_0 - 2] [i_0] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(26671764)))) || (((/* implicit */_Bool) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) - ((+(((((/* implicit */_Bool) -26671781)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (26671784)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [6ULL] = ((/* implicit */long long int) arr_3 [i_0] [i_5]);
                            arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) (~(26671780))));
                            var_22 = ((/* implicit */_Bool) ((int) arr_16 [12] [i_3] [i_3]));
                        }
                        arr_26 [i_0 - 2] [(signed char)1] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */signed char) max((-26671766), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_3] [7U] [(unsigned char)3] [i_0])) ? (arr_9 [i_0] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-26671784), (-26671766)))) ? (((((/* implicit */_Bool) 26671778)) ? (((/* implicit */int) arr_19 [i_0] [i_3])) : (-26671786))) : (-26671784)));
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        arr_31 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 26671784)) ? (arr_23 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) -26671766))))) && (((/* implicit */_Bool) var_10))));
        /* LoopSeq 4 */
        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            var_24 *= ((/* implicit */unsigned char) -26671764);
            var_25 = ((/* implicit */int) var_14);
            arr_34 [(signed char)2] [(_Bool)1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_30 [i_8 - 1])) ? (((/* implicit */int) arr_5 [i_8 - 2] [i_8 - 1])) : (((/* implicit */int) arr_5 [i_8 + 1] [i_8 + 2]))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_6))) ? ((+(max((-26671785), (((/* implicit */int) arr_19 [i_8] [i_8])))))) : (((/* implicit */int) ((26671789) > (26671778))))));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(26671766))))));
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_7] [i_9])) < (((/* implicit */int) arr_7 [i_7] [i_9])))))) == ((((!(((/* implicit */_Bool) 26671789)))) ? (((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7] [i_9]))) : (var_0))) : ((+(arr_18 [i_9])))))));
            var_29 = ((/* implicit */unsigned long long int) (+(((var_0) % (arr_32 [i_7] [i_9] [(_Bool)1])))));
        }
        for (signed char i_10 = 1; i_10 < 13; i_10 += 2) /* same iter space */
        {
            var_30 *= ((/* implicit */unsigned int) ((unsigned char) ((-26671784) & (-26671801))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((arr_27 [i_7]) || (((/* implicit */_Bool) (~(arr_37 [i_7])))))))))));
        }
        for (signed char i_11 = 1; i_11 < 13; i_11 += 2) /* same iter space */
        {
            var_32 = ((((/* implicit */_Bool) max((((/* implicit */int) var_18)), (-26671760)))) ? (((((arr_28 [i_7] [i_11 + 3]) + (9223372036854775807LL))) << (((((arr_28 [14ULL] [i_11 - 1]) + (2612174074482787137LL))) - (39LL))))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_11 + 3])) ? (arr_28 [i_7] [i_11 + 2]) : (var_0))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                var_33 = ((/* implicit */unsigned char) ((int) 26671778));
                arr_46 [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_38 [i_7] [i_11 + 3]))));
            }
            for (int i_13 = 2; i_13 < 14; i_13 += 2) 
            {
                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [18LL] [18LL] [i_13 - 2]))));
                arr_50 [i_7] [i_11 + 2] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (+(-26671801)))))));
            }
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_47 [12U] [11]))) || (((/* implicit */_Bool) arr_40 [i_7] [i_11] [i_7]))));
        }
    }
    var_36 = ((/* implicit */signed char) var_11);
    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 26671780)), (var_6))))))) >> ((((-(((-26671767) / (((/* implicit */int) var_16)))))) - (26671766))))))));
}
