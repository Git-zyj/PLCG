/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86980
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
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) >= (arr_2 [i_0 - 1])));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 8194972876502898713LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31566)) + (((/* implicit */int) (short)27398))))) ? (((/* implicit */int) ((arr_3 [i_0 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138)))))) : (((/* implicit */int) (unsigned char)146))))) : ((+(3688553015608321382ULL)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_15 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26536)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned char)134))))) ? (((arr_8 [i_0] [i_1] [i_1]) ? (arr_12 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((arr_12 [i_3] [15LL] [(signed char)13]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */long long int) (unsigned char)117);
                            var_16 = ((((/* implicit */_Bool) max((arr_10 [i_0 + 2]), (arr_10 [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 2])) ? (6174496948937842440LL) : (arr_10 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) >= (arr_10 [i_0 + 2]))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) ? (((/* implicit */int) ((((/* implicit */long long int) -1945098368)) <= (-3796976412341319126LL)))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_0 + 2] [6])) ? ((-(((/* implicit */int) (unsigned short)5198)))) : (((((/* implicit */_Bool) (short)28067)) ? (((/* implicit */int) (short)8757)) : (((/* implicit */int) arr_14 [i_0] [(unsigned short)17] [10] [i_3] [i_4] [i_4])))))))))));
                            var_18 += ((/* implicit */short) (unsigned char)143);
                        }
                        arr_16 [i_0] [i_0] [6U] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1945098368)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : ((+(arr_10 [i_1])))))) ? (((((/* implicit */_Bool) (unsigned short)38876)) ? (((unsigned long long int) (short)8749)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-6174496948937842451LL)))) ? (((/* implicit */int) ((short) arr_7 [i_2]))) : (((/* implicit */int) ((_Bool) 4024876263U))))))));
                        var_19 ^= (!(((_Bool) (~(((/* implicit */int) arr_7 [i_2]))))));
                    }
                } 
            } 
        } 
        arr_17 [(short)6] [i_0] |= ((/* implicit */short) (unsigned char)146);
    }
}
