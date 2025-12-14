/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91800
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
    var_15 = ((/* implicit */short) max((var_15), (((short) ((unsigned long long int) ((int) 8965547369895760280ULL))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_2)))))) ? ((~(7437373785831085593ULL))) : (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((_Bool) (short)-10796)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) 11009370287878465997ULL)));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned int) ((unsigned short) var_2))))));
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-109)))));
            arr_9 [i_2] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_14)))));
            var_21 = ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (7437373785831085589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (11009370287878466023ULL) : (var_1))));
            var_22 = ((/* implicit */short) (~(11009370287878466001ULL)));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [6ULL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_3]))) : (arr_17 [i_0] [i_3] [i_4 + 1] [i_4 + 3] [i_5])))) : ((-(var_10)))));
                        var_24 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_14)))));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) 7437373785831085596ULL)))));
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) var_3)))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) ((short) (short)-8301))))))));
        }
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned int) ((signed char) arr_12 [i_0] [i_0]))))));
    }
}
