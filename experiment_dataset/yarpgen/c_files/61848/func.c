/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61848
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
    var_10 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!((_Bool)1))))))) >= (15453979945301532001ULL)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((var_11), (var_2)));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) ^ ((~(var_4)))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) max((max(((short)3277), ((short)3270))), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (var_8))))))) < ((~(((/* implicit */int) ((((/* implicit */int) var_9)) != (var_6))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-30440), (((/* implicit */short) (_Bool)0)))))) <= (((var_3) * (((/* implicit */unsigned int) var_6))))))) | ((-(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_9)))))))));
        arr_4 [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))))) - (var_4))) < (((/* implicit */unsigned long long int) max(((~(3758302896U))), (((/* implicit */unsigned int) (+(1684699511)))))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)45))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_0))))))))))))));
                        var_15 ^= ((/* implicit */_Bool) var_9);
                        var_16 ^= var_2;
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) min((((/* implicit */int) ((((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_9)))))))), ((~(max((1324700207), (((/* implicit */int) var_9))))))));
    }
}
