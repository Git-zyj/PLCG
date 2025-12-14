/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72692
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
    var_16 = ((/* implicit */unsigned char) (+(-1669264952)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_2]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_4])) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) arr_4 [i_2] [i_4]))))), ((+(arr_9 [i_4] [i_0 + 3]))))))));
                            var_18 -= ((/* implicit */signed char) var_6);
                        }
                        arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3] [i_3] = ((/* implicit */unsigned short) (short)21929);
                    }
                } 
            } 
        } 
        arr_15 [15] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (7624253389959767444ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25131)))))));
        arr_16 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((arr_5 [i_0] [i_0 + 1]) | (arr_13 [i_0] [(signed char)17] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4488718965162936526LL)) ? (((/* implicit */long long int) -110078300)) : (-1681430721249978698LL)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_2 [i_5] [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_5] [i_5] [i_5])) == (var_4)))))))))));
        arr_20 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) -110078291)), (3774534282111296956LL)));
        arr_21 [i_5] [i_5] |= min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5]))) : (arr_1 [i_5])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1681430721249978688LL)) : (3341884503569766380ULL))))), (((/* implicit */unsigned long long int) arr_9 [10ULL] [i_5])));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_17 [i_5]), (arr_17 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5])))))) : (((((/* implicit */unsigned long long int) 4488718965162936535LL)) % (arr_17 [i_5]))))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = (-(arr_23 [i_6]));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) -1681430721249978695LL);
        var_22 = ((/* implicit */signed char) arr_23 [i_6]);
    }
    var_23 = (!(((/* implicit */_Bool) (short)2047)));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_10))));
    var_25 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_3))) / (((/* implicit */unsigned long long int) ((((var_14) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-2)) + (10)))))))) * (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))))))));
}
