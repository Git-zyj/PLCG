/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62219
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
    var_19 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_3)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (unsigned short)31802);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_0] [i_0] [i_3]))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52723))) ^ (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [8] [i_1] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31792))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((-236198566) <= (((/* implicit */int) (unsigned char)47)))))) > (((unsigned long long int) arr_5 [i_0] [i_3])))) ? (((((3646187953U) + (((/* implicit */unsigned int) -1222232621)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1145956166U)) ? (var_7) : (arr_0 [i_3] [i_3])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_13) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2] [i_3])))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)204)) * (((/* implicit */int) (_Bool)0))));
                        arr_12 [i_0] [i_1] [4ULL] [i_1] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) var_0)))) > (arr_0 [i_0] [(_Bool)1])));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) (unsigned short)27156)), (var_11))) : (((/* implicit */long long int) var_14))))) ? (((((/* implicit */_Bool) (~(-5008715827655173825LL)))) ? (((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)251)) ^ (1222232621))))) : (((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((/* implicit */int) ((signed char) var_16))) : (((/* implicit */int) var_10))))));
}
