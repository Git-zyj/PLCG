/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71310
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
    var_13 ^= ((/* implicit */int) ((unsigned short) var_10));
    var_14 -= ((/* implicit */_Bool) ((var_4) + (var_7)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)18])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) / (666968974663848429LL))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)20)) % (2146945121)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) | (793157575U))) : (((/* implicit */unsigned int) -1127961178)))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)27257)) && ((((-(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) var_12))))));
        arr_6 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) 692927513)) < (arr_1 [i_1])))))) | (((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1]))))) / (var_9))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_2 [(unsigned short)10]))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) min(((((-(arr_0 [i_2]))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38279)))))))))));
            var_20 = ((/* implicit */long long int) arr_3 [i_1]);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    {
                        arr_17 [(unsigned short)3] [i_5] = ((/* implicit */long long int) (~(793157575U)));
                        var_21 = ((/* implicit */short) var_3);
                        var_22 = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                arr_21 [i_6] = (~(arr_15 [i_1] [1] [i_3] [i_3] [i_6]));
                arr_22 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) ((arr_18 [(_Bool)1] [(unsigned char)12] [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)38278))));
                var_23 -= ((/* implicit */unsigned int) var_7);
            }
            arr_23 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) var_4);
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(short)4] [(signed char)7]))) ^ (((((/* implicit */_Bool) -655085734)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_7]))) : ((~(2338007676U)))))));
        var_25 = ((/* implicit */long long int) ((unsigned short) (-(var_4))));
        arr_28 [(unsigned char)5] = ((/* implicit */int) var_4);
        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) 1922009642)) + (((((/* implicit */_Bool) min(((short)24385), ((short)24385)))) ? (-9223372036854775805LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)112)))))))));
    }
    var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) == ((-(2338007686U)))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (min((var_3), (4426052858832062149LL)))))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) * (max((((long long int) var_12)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-5032)))))))));
}
